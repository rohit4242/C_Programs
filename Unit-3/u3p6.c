/* 6. Write a program to find out Number is Armstrong or not using UDF. */

#include <stdio.h>

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

int main()
{
    int num;

    printf("\nEnter Your Number: ");
    scanf("%d", &num);

    if(armstrong(num)==num)
    {
        printf("\nYour number is armstrong number");
    }
    else
    {
        printf("\nYour number is not armstrong number");
    }

    return 0;
}