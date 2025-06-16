#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long  n=10,i;
    int *p;
    p=(int *) malloc(n*sizeof(int)); 
    if(p==0)
    {
        printf("not enough memory");
        exit(1);
    }
    
    printf("the memory is allocated\n");
    p=(int*)realloc(p,n*sizeof(int)); 
    for(i=0;i<n;i++) printf("%10d",p[i]); 
    free(p); 
    

    return 0;
}