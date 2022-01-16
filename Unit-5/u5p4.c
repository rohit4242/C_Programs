/* 4.Write a program to demonstrate nested structure. */


#include <stdio.h>

typedef struct date_of_birth
{
    int day, month,year; 
}date;

struct student
{
    int roll_no;
    char name[20];
    date d1;
}std;

int main()
{

    printf("\nEnter your roll number: ");
    scanf("%d",&std.roll_no);
    printf("\nEnter your name: ");
    scanf("%s",&std.name);
    printf("\nEnter your DOB: ");
    scanf("%d %d %d",&std.d1.day,&std.d1.month,&std.d1.year);

    printf("\n*******Student Record********: ");

    printf("\nyour roll number is: %d",std.roll_no);
    printf("\nyour name is: %s",std.name);
    printf("\nyour birth date is: %d %d %d",std.d1.day,std.d1.month,std.d1.year);

    return 0;
}