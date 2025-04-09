#include <stdio.h>

int main()
{
    int a,*p;
    p=&a;
    //p=a we can not write like this syntax error sol taraf pointer sağ taraf normal bi sayı (ordinary variable)
    printf("%X %X %X",&a,p,&p); //&p p nin definition adressini basar
    //compilerda gözüken adres sadece başlangıc adresi integer 4 byte yer tutar
    //printf("%d",*p) it gives the value held by the pointer
    printf("\n%d %d\n",a,*p);
    *p=10; //a'nın değeri değişti
    printf("the new value of a: %d",a);

    return 0;
}