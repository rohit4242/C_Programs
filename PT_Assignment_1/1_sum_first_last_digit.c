/*Write a C program which takes input of 3 digits number from user and calculate
sum of first and last digit of input number.*/

#include <stdio.h>
int main() {

    int num, first_num, last_num, sum; 
    
    printf("\nEnter Your 3 digits Number: ");
    scanf("%d", &num);
    
    first_num = num /1000;
    last_num = num % 10;
    sum = first_num + last_num;
    
    printf("\nYour Sum is: %d", sum);

    return 0;
}