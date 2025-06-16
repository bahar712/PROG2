#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// always use local vsariable,otherwise it could be dangerous
// her seferind struct yazmamak için. c ve cppde type def dediğimiz bir tanımlama var

typedef struct 
{
    char name[50];
    int age;
    float marks;
} Student;

struct Point
{
    double x;
    double y;
};

struct Circle
{
    struct Point M;
    double radius;
};

struct cylinder
{
    struct Circle Cy;// böyle yaparak structları birbirine bağlıyoruz diye anladım.
    double height;
};

struct Complex
{
    double real;
    double imag;
};

void printStudent(Student std)
{
    printf("-------------------\n");
    printf("Name\t:%s\n",std.name); // it will print name member of student
    printf("Age\t:%d\n",std.age);
    printf("marks\t:%lf\n",std.marks); //pointer kullanırsak nokta yerine -> kullanırız
    return;

}

/* pointerlı fonksiyon yazarken böyle
void printStudent(Student *std)
{
    printf("-------------------\n");
    printf("Name\t:%s\n",std->name); // it will print name member of student
    printf("Age\t:%d\n",std->age);
    printf("marks\t:%lf\n",std->marks); //pointer kullanırsak nokta yerine -> kullanırız
    return;

}

*/

void printPoint(struct Point p)
{
        printf("-------------------\n");

    printf("Point:P(%1.1lf,1.1lf)\n",p.x,p.y);
}

void printCircle(struct Circle c)
{
    printf("-------------------\n");
    printf("Center point: "); printPoint(c.M);
    printf("Radius\t:%lf\n",c.radius);
}

void printCylinder(struct cylinder cy3)
{
    printf("-------------------\n");
    printf("Base Circle\t:"); printCircle(cy3.Cy);
    printf("height\t:%lf\n",cy3.height);
}

void printComplex(struct Complex c)
{
    printf("Comlex Number\t: ");
    if(c.imag<0)
    {
        printf("%1.1lf%1.1lfi\n",c.real,c.imag); // aradaki i imag number için
    }
    else
        printf("%1.1lf+%1.1lf ,",c.real,c.imag);

}

Student getStudent()
{
    Student std;
    printf("Enter Name\t:");
    fgets(std.name,50,stdin);
    std.name[strlen(std.name)-1]='\0';
    printf("Enter Age\t:");
    scanf("%d",&std.age);
    printf("Marks\t:");
    scanf("%lf",&std.marks);
    return std;
}

int main()
{
    Student s1, *s2,s3={"Ahmet",21,75.6},s4[10]; //sonuncu definition array 4 each
    struct Point p1,*p2,p3={5.1,6.7},p4[10];
    struct Circle c1,*c2,c3={{1,5},8.5},c4[10];
    struct cylinder cy1, *cy2, cy3={{{5,8},7},10 },cy4[10];
    struct Complex cmp1, *cmp2,cmp3={1,1},cmp4[10];
    s2=&s3;
    s1= getStudent();
    printStudent(s1);
    //printStudent(s2); // eğer fonksiyonu yukarıdaki gibi tanımlamışsak direkt s2 oalrak gönderebiliriz ama fonksiyon diğerleri gibi pointersız tanımlanmışsa *s2 şeklinde göndermemiz gerekir.
    printStudent(s3);
    printPoint(p3);
    printCircle(c3);
    printCylinder(cy3);
    printComplex(cmp3);
    

    return 0;
}