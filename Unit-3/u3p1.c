/* 1. Write a program to find out addition of two values using UDF.*/

#include <stdio.h>

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b;

    printf("\nEnter Your First Number: ");
    scanf("%d",&a);
    printf("\nEnter Your Second Number: ");
    scanf("%d",&b);
    
    printf("\nYour Sum Is: %d",sum(a, b));

    return 0;
}
