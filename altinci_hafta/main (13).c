#include <stdio.h>
#include <stdlib.h>

// yazdığı fonksiyon pointer fonk olmazsa işe yaramaz yine aynı sorunu yaşarım o yüzden fonkisyonun başına int * yazıyorum
// realloc belleği açar. bellekte bizim size ımız kadar boş alan arar. ama mallocta açtığım alanı yok edip yeni bi yeri atıyor. çünkü ihtiyacım olan kadar sıralı bir alan açmak için başka yeni bir yer arıyor
int * void F(int *p, int n)
{
    p=(int*) realloc(p,n*sizeof(int));
    if(p==NULL)
    {
        printf("out of memory");
        exit(1);
    }
    printf("\nF:%X\n",p);
    return;
}

int main()
{
   int *p,n=10,i;
   p=(int *) calloc(n,sizeof(int));
   if(p==NULL)
    {
        printf("out of memory");
        exit(1);
    }
    
    printf("%X\n",p);
    for(i=0;i<n;i++) printf("%4d",p[i]);
    n=10000;
    F(p,n);
    for(i=0;i<n;i++) printf("%4d",p[i]);
    free(p);
    return 0;
}