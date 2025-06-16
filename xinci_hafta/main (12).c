#include <stdio.h>

/* 
in binary files data stored in binary forms
if you store data in text file you can see the info but the total size of file is 10 byte
w mode destroyes all the info in the FILE
if you are using r mode file must be exist if file does not exist you can not open
 a append fileın sonuna ekleme yapar
*/

int main()
{
    FILE *fp; //file pointer
    int x=1234567896;
    fp=fopen("a.txt","r");
    if(fp==Null)
    {
        printf("the file is not opened");
        exit(1);
        
        fscanf(fp,)
    }

    return 0;
}