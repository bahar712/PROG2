#include <stdio.h>

int main()
{
    // int a=5;
    //char a=5;
    long long int a=5;
    printf("%d %p %x %X %d %d\n",a,&a,&a,&a,sizeof(&a),sizeof(a));

    return 0;
}

// int *p burda pointer is p not *p and p equal adress of p