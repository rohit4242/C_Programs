/* 7. Write a program to find out Number is Prime or not */

#include <stdio.h>

int prime(int x)
{
    int i, temp =0;
    for (i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            temp = 1;
        }
    }
    return temp;
}

int main()
{
    int num;

    printf("\nEnter your number: ");
    scanf("%d",&num);

    if(prime(num)==1)
    {
        printf("\n%d is not a prime number",num);
    }
    else if(num==1)
    {
        printf("\n1 is not prime number");
    }
    else
    {
        printf("\n%d is a prime number",num);
    }
    return 0;
}