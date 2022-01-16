#include <stdio.h>
#include <conio.h>
#include <string.h>

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
    int sum = 0, temp;

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
    int sum = 0, temp;

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
    int sum = 0, temp;

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
    int sum = 0, temp;

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

int lcm(int x, int y)
{
    int a, b;
    a = x; 
    b = y;
    while (a!=b)
    {
        if(a<b)
        {
            a+=x;
        }
        else 
        {
            b+=y;
        }
    }
    return a;
}

int hcf(int x, int y)
{
    int a, b;
    a = x; 
    b = y;
    while (a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else 
        {
            b-=a;
        }
    }
    return a;
}

int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int max_of_array(int num[], int N)
{
    int max = num[0];

    for(int i=0;i<N;i++)
    {
        if(num[i]>max)
        {
            max = num[i];
        }
    }
    return max;
}

int min_of_array(int num[], int N)
{
    int min = num[0];

    for(int i=0;i<N;i++)
    {
        if(num[i]<min)
        {
            min = num[i];
        }
    }
    return min;
}

int check_str_palindrome(char str[])
{
    int len, temp = 0;
    len = strlen(str);

    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            temp =1;
            break;
        }
    }
    return temp;
}

int strlength(char str[])
{
    int len=0;
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    return len;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void area_of_circle_using_pointer(int r, float *a,float *d, float *c)
{
    *a = 3.14159*r*r;
    *d = 2*r;
    *c = 2*3.14159*r;
}

int sum_first_and_last_digit(int x)
{
    int first_num, last_num, sum; 

    first_num = x /1000;
    last_num = x % 10;
    sum = first_num + last_num;
    
    return sum;
}

typedef struct current_date_and_birth_date
{
    int day, month,year; 
    char name[20];
}date;

void age_calculator(date a, date b)
{
    int day, month,year;

    if(a.day>b.day)
    {
        b.day = b.day + 30;
        b.month = b.month - 1;
    }
    if(a.month>b.month)
    {
        b.year = b.year - 1;
        b.month = b.month + 12;
    }

    day = b.day - a.day;
    month = b.month - a.month;
    year = b.year - a.year;

    printf("\n%s Your age is: %d year %d month and %d days",a.name,year,month,day);

}