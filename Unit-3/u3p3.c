/* 3. Write a program to find out reverse of number using UDF */

#include <stdio.h>

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

int main()
{
    int num;

    printf("\nEnter Your Number: ");
    scanf("%d", &num);

    printf("\nYour revers numbers is: %d",reverse_num(num));

    return 0;
}