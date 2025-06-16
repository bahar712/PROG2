#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[]="Yildiz";
    char str2[]="yildiz";
    if(strcmp(str1,str2)==0) printf("They are equal");
    if(strcmp(str1,str2)<0) printf("str1<str2");
    if(strcmp(str1,str2)>0) printf("str1>str2"); //ascii kodlarından hesaplar

    return 0;
}