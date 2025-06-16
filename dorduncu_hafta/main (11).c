#include <stdio.h>
#include <stdlib.h>

//pointerlı fonksiyon da olabilir ama o zaman pointer bir değer döndürmesi gerekir

int *F(int n)
{
    int *p=(int*)malloc(n*sizeof(int));
    if(p==NULL) exit(1);
    return p;
}

int main()
{
    int *ip, n=20,i;
    ip=F(n);
    for(i=0;i<n;i++)
        ip[i]=i*i*i;
    for(i=0;i<n;i++) printf("%4d",ip[i]);
    free(ip);
    return 0;

    return 0;
}