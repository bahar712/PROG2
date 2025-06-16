#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

//abs mutlak değer fonksiyonu
typdef struct
{
    int day;
    int month;
    int year;
} Date;

double differenceDates(Date d1, Date d2)
{
    int totaldays1= d1.year*365+ d1.month *30 + d1.day;
    int totaldays2= d2.year*365+ d2.month *30 + d2.day;
    
    int diff= abs(totaldays2- totaldays1);
    
    Date result;
    result.year=diff/365;
    result.month=(diff%365)/30;
    result.day=(diff%365)%30;
    
    return result;

}

bool checkLapYear(int a)
{
    if(a%4==0) return true;
    else return false;
}

double func(int a, int year1)
{
    Date result;
    result.year= year1;
    if(checkLapYear(year1)==0)
    {
        if(a<30)
        {
            result.month=1;
            result.day=a;
        }
        else 
        {
            result.month=a/30;
            result.day=a%30;
        }
        
    }
    
    if(checkLapYear(year1)==1)
    {
        
    }
    
}

int main()
{
    

    return 0;
}