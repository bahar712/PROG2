#include <stdio.h>
#include <stdlib.h>

int **allocateMatrix(int row, int col)
{
    int **matrix,i;
    matrix=int(**) calloc(row,sizeof(int*));
    if(matrix==NULL) exit(1);
    for(i=0;i<row;i++)
    {
        matrix[i]=(int*) calloc(col,sizeof(int));
        if(matrix[i]==NULL) exit(1);
    }
    return matrix;
}

void generateRandom(int **matrix,int row, int col)
{
    int i,j;
    srand(time(NULL));
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++) matrix[i][j]=rand()%100;
    }
    return;
}

void printMatrix(int **matrix,int row, int col)
{
    int i,j;
    srand(time(NULL));
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++) printf("%4d",matrix[i][j]);
        printf("\n");
    }
    return;
}
int main()
{
    int i, **matrix, row=10, col=5;
    matrix=allocateMatrix(row,col);
    generateRandom(matrix,row,col);
    printMatrix(matrix,row,col);
    for(i=0;i<row;i++) free(matrix[i]);
    free(matrix);

    return 0;
}