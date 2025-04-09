#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//avesisteki 4.soru str[¬enl li kısmı çok anlamadım]
// we must decide the base condition

int stringLength(char *str)
{
  if(*str=='\0') return 0;
  return 1+stringLength(str+1);
}


void reverseString(char *str, int left, int right)
{
    char temp;
    if(left>right) return;
     temp=str[left];
     str[left]=str[right];
     str[right]=temp;
     
     reverseString(str,left+1,right-1);
     return; // you do not have to use return bc is void method
}

void printReverse(char *str)
{   
    if(*str=='\0') return;
    printReverse(str+1);
    printf("%c",*str);
    return;
}

isPalindrome(char *str, int left,int right)
{
    if(left>=right) return 1;
    if(str[left]!=str[right]) return 0;
    return isPalindrome(str,left+1,right-1);
    
}

e int countVowels(char *str)
{
    char ch;
    int isVowel;
    if(*str=='\0') return 0;
    if(*str>='A' && *str<='Z') ch=*str+32;
    else ch=*str;
    int isVowel=(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    
    return isVowel+countVowels(str+1);
}

int countConsonants(char *str) 
{
    char ch;
    int isConsonant=0;
    if(*str=='\0') return 0;
    if(*str>='A' && *str<='Z') ch=*str+32;
    else ch=*str;
    if(ch>='a' && ch<='z') 
        isConsonant!=(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    
    return isConsonant+countConsonants(str+1);
}

void toUppercase(char *str)
{
    if(*str=='\0') return;
    if(*str>='a' && *str<='z') *str-=32;
    toUppercase(str+1;)
    return;
}

void toLowercase(char *str)
{
    if(*str=='\0') return;
    if(*str>='A' && *str<='Z') *str-=32;
    toLowercasecase(str+1;)
    return;
}

void replaceChar(char *str, char oldChar, char newChar)
{

}


int main()
{
    char str[100];
    int len;
    printf("Enter a string: ");
    fgets(str,100,stdin);
    len= stringLength(str)-1;
    reverseString(str,0,len-1); // len-1 bc index starts from 0;
    //printf("%s len:%d",str,len);
    printReverse(str);
    if(isPalindrome(str,0,len-1)==1) printf("%s is palindrome\n",str);
    else printf("%s is not palindrome\n",str);
    //printf("number of vowels: %d", countVowels(str));
    printf("number of vowels: %d", countConsonants(str));
    toUppercase(str);
    printf("%s",str);

    return 0;
}