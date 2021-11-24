#include <stdio.h>
#include <conio.h>

int sum(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}

int fact(int x)
{
    int i, fact = 1;
    for(i=1;i<=x;i++)
    {
        fact *=i;
    }
    return fact;
}

int reverse_num(int x)
{
    int i, sum = 0, temp;

    while(x>0) 
    {
        temp = x%10;
        sum = (sum*10)+temp;
        x = x/10;
    }
    return sum;
}

int sum_of_num(int x)
{
    int i, sum = 0, temp;

    while(x>0)
    {
        temp = x%10;
        sum +=temp;
        x = x/10;
    }
    return sum;
}

int palindrome(int x)
{
    int i, sum = 0, temp;

    while(x>0)
    {
        temp = x%10;
        sum = (sum*10)+temp;
        x = x/10;
    }
    return sum;
}

int armstrong(int x)
{
    int i, sum = 0, temp;

    while(x>0)
    {
        temp = x%10;
        sum += temp*temp*temp;
        x = x/10;
    }
    return sum;
}





