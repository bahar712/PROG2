#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void F(int arr[],int n){
     int i;
   for(i=0;i<n;i++) arr[i]=rand()%100;
   return;
}


void printArray(int arr[],int n){
    int i;
    for(i=0;i<n;i++) printf("%4d",arr[i]);
    return;
}

void changeValue(int arr[],int n){
    arr[0]=-5;
    return;
}

void doesnotChangeValue(int x){
    x=125;
    return;
}


int main()
{
  int arr[5],n=5;
  F(arr,5);
  printArray(arr,n);
  changeValue(arr,n);
  printf("\n");
  printArray(arr,n);
  doesnotChangeValue(arr[0]);
  printf("\n");
  printArray(arr,n);

    return 0;
}
