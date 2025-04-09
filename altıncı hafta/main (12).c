#include <stdio.h>

int main()
{
    short int *p,i;
    char str[30];
    p=&i;
    printf("%X %X\n",p,str);
    printf("\n sizeof(p): %d sizeof(i):%d\n",sizeof(p),sizeof(i));
    printf("%X %X\n",str,&str)// X seni baştaki sıfırlardan kurtarıyo
    printf("Enter a string: ");
    scanf("%s",p);// & koymama gerek yok çünkü str de adresi gösteriyor &str de zaten & kullanma sebebiniz scanfe adresi vermek pointerın kendisi adres zaten
    printf("\nstring:%s",str);
    return 0;
}