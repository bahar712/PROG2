#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[]="Yildiz Technical";
    char str2[]="University";
    strcat(str1,str2);

    printf("%s",str1);

    return 0;
}