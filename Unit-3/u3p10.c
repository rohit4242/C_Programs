/* 10.Write a program to demonstrate use of #include directive */
#include <stdio.h>
#include "alludf.h"

int main()
{
    int a, b;
    printf("\nEnter Your First Number: ");
    scanf(" %d",&a);
    printf("\nEnter Your Second Number: ");
    scanf("%d",&b);

    printf("Your Sum is: %d",sum(a,b));
}