#include <stdio.h>
#include <stdlib.h>
/*
char str[]= {'h','e','l','l','\0'};
char str[]="hello\0";


char *str="hello\0";
str[0]='h'; // not a lowed because if is read only memory

strcpy(dert,src) unsafe may cause buffer overlfow
stmcpy(dest,src,sizeof(dest)-1) safer but not null terminal

*/

int main()
{
  char str1[]={'H','e','l','l','o','\0'};
  char str2[]="Hello";
  char *str3="Hello"; // read only memory
  char *str4;
  str4=(char *) malloc(20*sizeof(char));
  if(str4==NULL) exit(1);
  
  str4[0]='h';
  str4[1]='\0';
  str2[0]='h';
  
  
  printf("%s  %s %s %s",str1,str2,str3,str4);




    return 0;
}