#include <stdio.h>

/* void swap(int x, int y)
{
    int c=x;
    x=y;
    y=c;
    printf("%d %d\n",x,y);
    return;
} */

void swap(int *x, int *y)
{
    int c=*x; //c=x yapamazsın çünkü c integer x pointer
    *x=*y;
    *y=c;
    printf("%d %d\n",*x,*y);
    return;
} // işlem aslında pointersız olan şekilde ama tüm pointer olan değerleri * ile integera çeviriyosun

int main()
{
    int a=5,b=7;
    swap(&a,&b);
    printf("%d %d\n",a,b);

    return 0;
}