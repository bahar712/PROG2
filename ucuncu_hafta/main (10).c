#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char src[]="Yildiz Technical University";
    char dest[100];
    strcpy(dest,src);
    printf("%s %s\n",src,dest);
    strncpy(dest,src,10);
    printf("lenght: %d\n",strlen(dest));
    printf("%s %s\n",src,dest);
    

    return 0;
}