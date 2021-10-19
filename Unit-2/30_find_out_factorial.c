/*30. Write a program that input number and find out factorial of
given number.*/


#include <stdio.h>

int main(){

    int i, num, fact=1;

    printf("\nEnter Your Number To Find Out Factorials: ");
    scanf("%d", &num);

    for (i=1;i<=num;i++){

        fact = fact*i;
    }
    printf("\nThe Factorials Of %d is: %d",num, fact);

    return 0;
}
