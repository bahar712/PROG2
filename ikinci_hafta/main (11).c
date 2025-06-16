#include <stdio.h>

int main()
{
   //int *p,a;
   //char *p,a;
   short int *p,a;

   p=&a;
   printf("%X %X\n",&a,p);
   p++;
   printf("%X %X\n",&a,p);


    return 0;
}