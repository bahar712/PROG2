#include <stdio.h>

int main()
{
    FILE *fpout; //for outoput that means writing
    char *fname[]="computer.txt";
    fpout= fopen(fname,"w");
    if(fpout==NULL)
    {
        printf("File is not opened");
        exit(1);
    }
    fprintf(fpout,"the file %s is opened for wrting \n");
    fputs("desstroyed all info if exists) \n");
    fputs("(destroyed all info if exists)\n",fpout);
    fputc('s',fp);
    
    printf("the file %s is opened for writing (destroyed all info if exits)",fname);
    fclose(fpout);

    return 0;
}