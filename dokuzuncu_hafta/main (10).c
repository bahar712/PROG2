#include <stdio.h>
#include <stdlib.h>

//sınavdaki 4. soru

int main()
{
    int *array, n=2, k=0,a,i;
    array=(int *) calloc(n,sizeof(int));
    if(array==NULL) exit(1);
    while(1)
    {
        scanf("%d",&a);
        if(a==0) break;
        if(k>=2) // k yı diznin 0. elemanı olarak başlatıyoruz
        {
            array=(int *) realloc(array,n*sizeof(n));
            if(array==NULL) exit(1);
            array[k]=a;
        }
        else array[k]=a;
        k++;
    }
    for(i=0;i<k;i++) printf("%5d",array[i]);
    free(array);
    
    return 0;
}