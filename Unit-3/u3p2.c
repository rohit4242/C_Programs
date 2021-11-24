/* 2. Write a program to find out factorial of number using UDF */

#include <stdio.h>

int fact(int x)
{
    int i, fact = 1;
    for(i=1;i<=x;i++)
    {
        fact *=i;
    }
    return fact;
}

int main()
{
    int num;

    printf("\nEnter Your Number: ");
    scanf("%d",&num);

    printf("\nFactorial of %d is: %d", num, fact(num));
 
    return 0;
}