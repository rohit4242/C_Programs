/* 8. Write a program to find out Fibonacci series up to user input using UDF. */

#include <stdio.h>

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

int main()
{
    int num;

    printf("\nEnter your number: ");
    scanf("%d",&num);

    fibonacci(num);

    return 0;
}