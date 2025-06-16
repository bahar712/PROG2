#include <stdio.h>
#include <stdlib.h>

char convert2Lower(char x)
{
    if(x>='A' && x<='Z') x+=32;
    return x;
}

int countVowels(char *str)
{
    char ch;
    if(*str=='\0') return 0;
    ch=convert2Lower(*str);
    if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
        return 1+countVowels(Str+1);
    return countVowels(str+1);
}

int main()
{
   printf("member of vowels:%d",countVowels("Yildiz Technical University"));

    return 0;
}