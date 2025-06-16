#include <stdio.h>
#include <stdlib.h>

//calloc başlangıç değeri olarak sıfır atiyo
// realloc kullanmanın dezavantajı başlangıçta tutulan adresi değiştirmesi

int main()
{
    int *p,i,n=10;
    p=(int *)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("out of memory");
        exit(1);
    }
    
    printf("adress of p:%X\n",p);

    p=(int *)realloc(p,n*10000*sizeof(int)); // her bellek atama işleminden sonra yeterli bellek var mı onu kontrol etmelisin yoksa patlar
    if(p==NULL)
    {
        printf("out of memory");
        exit(1);
    }
    
    printf("new adress of p:%X\n",p); //başlangıçta tutulan adres değişti
        
    
    free(p);
    return 0;
}