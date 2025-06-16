#include <stdio.h>

typedef struct
{
    char plate[10];
    char brand[10];
    int year;
    float price;
    int status;// 0 is available, 1 is rented
} Car;


int Menu()
{
    int choice,k;
    do 
    {
        printf("------MENU----/n");
        printf("1.Record\n");
        printf("2. Rent.A car\n");
        printf("3.Return a Car\n");
        printf("5. updating a record\n");
        printf("6. exit\n");
        printf("-----> your selection:");
        k=scanf("%d",&choice);
        fflush(stdin);
        if(k<1 | choice>6) printf("\n Invalid selection. Please select again!\n");
    } while(k<1 || choice >6);
    return choice

    }

}

void removeEnter

void recordCar(char *fname)
{
    FILE *fp;
    fp=fopen(fname,"ab");
    if(fp==NULL)
    {
        printf("file opening error");
        return;
    }
    Car car;
    printf("Enter PLate Number:");
    fgets(car.plate,10,stdin);
    removeEnter(car.plate);
    printf("Enter brand ");
    fgets(car.plate,10,stdin);
    removeEnter(car.brand);
    printf("Enter year:");
    fgets(car.year,10,stdin);
    removeEnter(car.year);
    
    
}


int main()
{
   int choice;
   char. *fname="car.bin";
   do{
       choice=menu();
       switch(choice)
       {
           case 1:
           recordCar(fname);
           break;
           case 2:
           break;
           case 3:
           break;
           case 4:
           break;
           case 5:
           break;
           case 6:
           break;
       } 
   }while(choice!=6);
    
    return 0;
    
    
    
}