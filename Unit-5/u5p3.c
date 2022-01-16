/* 3.Write a program that compares two given dates. To store a date use a
structure that contains three members namely date, month and year. If the
dates are equal then display message “equal” otherwise “not equal”. */

#include <stdio.h>

typedef struct dates
{
    int day, month,year; 
}date;

void age_calculator(date a,date b)
{

    if((a.day==b.day)&& (a.month==b.month)&& (a.year==b.year))
    {
        printf("\nYour dates are equal");
    }
    else
    {
        printf("\nYour dates are not equal");
    }
}

int main()
{
    date d1, d2;
    printf("\nEnter your birth date: ");
    scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
    printf("\nEnter the current date: ");
    scanf("%d %d %d",&d2.day,&d2.month,&d2.year);

    age_calculator(d1,d2);

    return 0;
}