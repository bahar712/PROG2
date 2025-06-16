#include <stdio.h>


// arr is a pointer
int main()
{
    int arr[]={10,20,30,40};
    int *ptr,i, n=sizeof(arr)/sizeof(arr[0]);
    ptr=arr; //equavelent to &arr[0]
    printf("%X %X the adress of zeroth element: %X\n",ptr,arr,&arr[0]);
    for(i=0;i<n;i++)
    {
        printf("%4d %4d %X ",arr[i], *(ptr+i),ptr); //&ptr başlangıçtaki değeri *(ptr+i) ile ptrın değerini değiştirmeden tüm elemanları yazdırabiliriz
        //ptr++;
    }
    return 0;
}