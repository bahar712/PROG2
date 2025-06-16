#include <stdio.h>

void F(int *x, int y)
{
    *x=12;
    y=15;
    return;
}

int main()
{
   int x=10,y=15;
   F(&y,x);
   printf("%d %d\n",x,y);

    return 0;
}