/* 9. Write a program to demonstrate use of macro */

#include <stdio.h>
#define square(n) n*n
int main()
{
    int num;

    printf("\nEnter Your Number: ");
    scanf("%d",&num);

    printf("\nYour Square of Number is: %d",square(num));
}