#include <stdio.h>
#include <stdlib.h>

// when we defined an array we must give the size
// malloc, calloc,  realloc
//n in büyüklüğü ile oynadığımızda bir yerden sonra not enough memory çıktısını alırız
// there is only one difference. calloc only gives initial value as 0 if you use malloc any number could be
// sadece memory ilave etmek için reallocla kullanılır. reallocla ilk defa memory açılmaz, tehlikelidir. malloc ve calloc ile açılır

int main()
{
    long long  n=10,i;
    int *p;
    p=(int *) malloc(n*sizeof(int));  // bu satırla aslında bir array oluşturuyoruz // calloc(n,sizeof(int))
    // malloc(<total size in byte>)
    if(p==0)
    {
        printf("not enough memory");
        exit(1);
    }
    
    printf("the memory is allocated\n");
    n=20000;
    p=(int*)realloc(p,n*sizeof(int)); // we extended the memory.
    if(p==NULL)
    {
        printf("there is not enough memory to extend");
        exit(1);
    }
    for(i=0;i<n;i++) printf("%10d",p[i]); // *(p+i); or 
    /* {
        printf("%10d",*p);
        p++;
    }
    p-=n;
    */
    free(p); //we must use free method reallocte the memory do not forget
    

    return 0;
}