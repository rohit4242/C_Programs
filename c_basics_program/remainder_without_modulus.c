/* Write a c programs to display  remainder of input two number without %  modulus operator*/

#include <stdio.h>
int main(){

    int num, divisor, remainder;

    printf("\nEnter Your Number: ");
    scanf("%d",&num);
    printf("\nEnter Your Divisor: ");
    scanf("%d",&divisor);

    while(num>=divisor)
    {
        num -= divisor;
    }

    remainder = num;
    printf("\nYour Remainder is: %d",remainder);

    return 0;
}