#include <stdio.h>

void F(int x){
    x=1;
    return;
}

void Fprt(int *x)
{
    *x=10;
    return;
}

int main()
{
    int a=25;
    printf("the value of a:%d \n",a);
    F(a);
    printf("the value of a:%d \n",a); // does not change bc adress of a and adress of x is different
    Fprt(&a);
     printf("the value of a:%d \n",a);

    return 0;
}