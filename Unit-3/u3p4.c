/* 4. Write a program to find out Sum of digits using UDF. */

#include <stdio.h>

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

int main()
{
    int num;

    printf("\nEnter Your Number: ");
    scanf("%d", &num);

    printf("\nYour sum of the numbers is: %d",sum_of_num(num));

    return 0;
}