#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define PI 3141
// first question
typedef struct
{
 double x;
 double y;
} Point;

typedef struct
{
    Point M;
    double radius;
}Circle;

double distance(Point p1, Point p2)
{
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}

void check(Point p, Circle c)
{
    double d=distance(p,c.M);
    printf("d:%lf radius:%lf\n",d,c.radius);
    if(d==c.radius) printf("the point is on the circle\n");
    else if(d<c.radius) printf("the point is inside the circle\n");
    else printf("the point is outside the circle\n");
}

double around(Circle c)
{
    return 2*PI*c.radius;
}

double area(Circle c)
{
    return PI*pow(c.radius,2);
}

bool checkTheSameCenter(Circle c1, Circle c2)
{
    if(c1.M.x==c2.M.x && c1.M.y==c2.M.y) return false;
    // return (c1.M.x==c2.M.x && c1.M.y==c2.M.y)  bu yazım da doğru
}


double areaBetween(Circle c1, Circle c2)
{
    if(checkTheSameCenter(c1,c2)==false) return -1;
    return fabs(area(c1)-area(c2));

}

int main()
{
    Point p={3,1};
    Circle c1={4,5,1}, c2={4,1,2};
    double result;
    check(p,c1);
    check(p,c2);
    check(c1.M,c2);
    printf("The around of c1\t:%lf\n",around(c1));
    printf("The around of c2\t:%lf\n",around(c2));
    printf("The area of c1\t:%lf\n",around(c1));
    printf("The area of c2\t:%lf\n",around(c2));
    result=areaBetween(c1,c2);
    if(result==-1) printf("The circles do not have the same center\n");
    else printf("the area between c1 and c2\t:%lf\n",result);
    return 0;

    
    return 0;
}