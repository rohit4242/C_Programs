// claculate age of two dates.
#include <stdio.h>
// #include <stdlib.h>

typedef struct current_date_and_birth_date
{
    int c_day, c_month,c_year; 
    int b_day,b_month,b_year;
    char name[20];
}date;

void age_calculator(date a)
{
    int day, month,year;

    if(a.b_day>a.c_day)
    {
        a.c_day = a.c_day + 30;
        a.c_month = a.c_month - 1;
    }
    if(a.b_month>a.c_month)
    {
        a.c_year = a.c_year - 1;
        a.c_month = a.c_month + 12;
    }

    day = a.c_day - a.b_day;
    month = a.c_month - a.b_month;
    year = a.c_year - a.b_year;

    printf("\n%s Your age is: %d year %d month and %d days",a.name,year,month,day);

}

int main()
{
    date d1;
    printf("\nEnter your name: ");
    gets(d1.name);
    printf("\nEnter your birth date: ");
    scanf("%d %d %d",&d1.b_day,&d1.b_month,&d1.b_year);
    printf("\nEnter the current date: ");
    scanf("%d %d %d",&d1.c_day,&d1.c_month,&d1.c_year);

    age_calculator(d1);

    return 0;
}
