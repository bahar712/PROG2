#include <stdio.h>
#include <math.h>

//Definition: A Complex number is represented as real part (double) and imaginary part
//(double). According to this definition. 
//avesis struct quesitondaki 4. soru

typedef struct
{
    double real;
    double imag;
} Complex;

Complex conjuguate( Complex e)
{
    a.imag*=-1;
    return a;
}

double module(Complex a)
{
    return sqrt(a.real*a.real+a.imag*a.imag);
}

Complex subtract(Complex a, Complex b)
{
    Complex c;
    c.real=a.real - b.real;
    c.imag=a.imag - b.imag;
    return c;
}

Complex product(Complex a, Complex b)
{
    Complex c;
    c.real=a.real*b.real -a.imag*b.imag;
    c.imag= a.real*b.imag + a.imag*b.real;
    return c;
}

Complex quatation(Complex a, Complex b)
{
    Complex c=product(a,conjuguate(b));
    double r=pow(module(b),2);
    c.real/=r;
    c.imag/=r;
    return c;
}

Complex nthpower(Complex a, int n)
{
    double theta,r;
    Complex result;
    if(a.real==0) theta=PI/2;
    else theta=atan(a.imag/a.real);
    r=module(a);
    result.real=pow(r,n)*cos(n*theta);
    result.imag=pow(r,n)*sin(n*theta);
    return result;
}

Complex nthroot(Complex a, int n, Complex *nth)
{
    double theta,r,k=0;
    int i;
    if(a.real==0) theta=PI/2;
    else theta=atan(a.imag/a.real);
    r=pow(module(a),1./n); //dot sanırım integerlar için konuldu
    for(i=;i<n;i++)
    {
        nth[i].real=r*cos((2*PI+theta)/n);
        nth[i].imag=r*sin((2*PI+theta)/n);

    }
    
    
}

int main()
{
   Complex *nth, a=(1,1);// a=(1,1) means 1+1
   int n=5;
   nth=(Complex *) calloc(n,sizeof(Complex));
   if(nth==NULL) exit(1);
   nthroot(a,n,nth);
   printf("Roots:\n");
   for(i=0;i<n;i++) printf("i:%d\t%1.4lf+%1.4lfi\n",i,nth[i].real,nth[i].imag);
   printf("proof:\n");
   for(i=0;i<n;i++)
   {
       temp=nthpower(nth[i]);
       printf("i:%d\t%1.4lf+%1.4lfi\n",i,temp[i].real,temp[i].imag);
   }
   free(nth);

    return 0;
}