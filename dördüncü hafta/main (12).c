#include <stdio.h>
#include <stdlib.h>

// pointer to pointer: pointer stores another adress of pointer. double pointer da denir.
//if you want to create a matrix you must use double pointer.

int main()
{
   int a=5;
   int *p1=&a;
   int **p2=&p1;
   printf("%d %d %d\n",a,*p1,**p2);
   **p2=10;
   printf("a=%d\n",a);

    return 0;
}