#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//strchr var ona. da bak strtok var
int main()
{
    /*char str[]="Yildiz Technical University"
    char *dest=strstr(str,"tech");
    printf("%s\n",dest); */

     char str[]= "hello world, split ";
    printf("original: %s\n",str);
     char *token =strtok(str,", ");
     while (token !=NULL){
         printf("%s\n",token);
         token = strtok(NULL, ",");
     }
    return 0;
}