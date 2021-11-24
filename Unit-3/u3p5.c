/* 5. Write a program to find out Number is Palindrome or not using UDF. */

#include <stdio.h>

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

int main()
{
    int num;

    printf("\nEnter Your Number: ");
    scanf("%d", &num);

    if(palindrome(num)==num)
    {
        printf("\nYour number is palindrome ");
    }
    else
    {
        printf("\nYour number is not palindrome ");
    }

    return 0;
}