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

void fibonacci(int x)
{
    int first_num=0, second_num=1, next;

    printf("Your Fibonacci Series is: %d %d ",first_num,second_num);
    next = first_num+second_num;
    while(next<=x)
    {
        printf("%d ",next);
        first_num = second_num;
        second_num = next;
        next = first_num+second_num;
    }
}

int interest(int x, int y, int z)
{
    return  x*y*z/100;
}

void area_of_circle(int x)
{
    float diameter, circumference, area;

    area = 3.14159*x*x;
    diameter = 2*x;
    circumference = 2*3.14159*x;
    
    printf("\nYour Area of Circle is: %.2f",area);
    printf("\nYour Diameter is: %.2f",diameter);
    printf("\nYour Circumference is: %.2f",circumference);

}

void area_of_rectangle(int x, int y)
{
    int area;
    area = x*y;
    printf("\nYour Area Of Rectangle is: %d", area);
}

void value_interchange(int x, int y)
{
    int temp;

    printf("\nBefor Change");
    printf("\nX=%d",x);
    printf("\nY=%d",y);

    // x = x + y;
    // y = x - y;
    // x = x - y;

    temp = x;
    x = y;
    y = temp;

    printf("\nAfter Change");
    printf("\nX=%d",x);
    printf("\nY=%d",y);

}

float fahrenheit_to_celsius(int x)
{
    return (x-32)*5/9;
}






