// claculate age of two dates.

#include <stdio.h>
//#include <stdlib.h>

void age_calculator(int c_day,int c_month, int c_year,int b_day,int b_month,int b_year)
{
    int day, month,year;

    if(b_day>c_day)
    {
        c_day = c_day + 30;
        c_month = c_month - 1;
    }

    if(b_month>c_month)
    {
        c_year = c_year - 1;
        c_month = c_month + 12;
    }

    day = c_day - b_day;
    month = c_month - b_month;
    year = c_year - b_year;

    printf("\nYour age is: %d year %d month and %d days",year,month,day);

}

int main()
{
    int c_day, c_month,c_year, b_day,b_month,b_year;

    printf("\nEnter the birth date: ");
    scanf("%d %d %d",&b_day,&b_month,&b_year);
    printf("\nEnter the current date: ");
    scanf("%d %d %d",&c_day,&c_month,&c_year);

    age_calculator(c_day,c_month,c_year,b_day,b_month,b_year);

    return 0;
}
