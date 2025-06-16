#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,i,n=10;
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("out of memory");
        exit(1);
    }
  
    printf("adress of p:%X\n",p);
    
    
    for(i=0;i<10;i++) 
    {
         *p=i;
         printf("adress of p:%X value: %d\n",p,*p);
         p++;//p nin tuttuğu adresi bir sonraki integera taşı demek. bunu yazmassam hep aynı yere atama yapar
    }
    
    p-=n; // başlangıç noktasına geri döndürdüm çünkü adres 10 ileri gitti ama ordan sonra benim başta tahsis ettiğim alan kadar boş yer var mı bilmiyoruz
    for(i=0;i<n;i++) printf("%4d",p[i]);
        
    
    free(p);
    return 0;
}