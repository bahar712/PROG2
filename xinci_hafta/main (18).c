#include <stdio.h>

int main()
{
    FILE *fpout; //for outoput that means writing
    char *fname[]="computer.txt";
    char buffer[256];
    fpout= fopen(fname,"r");

    if(fpout==NULL)
    {
        printf("File is not opened");
        exit(1);
    }
    
    fscanf(fp,"%s",buffer);
    printf("%s",buffer);
    fscanf(fp,"%s",buffer);
    printf("%s",buffer);
    // fgets(buffer,)
    fclose(fpout);

    return 0;
}