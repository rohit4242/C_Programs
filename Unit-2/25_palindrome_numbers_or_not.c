/*25. Write a program that input number and find out number is
palindrome or not.*/


#include <stdio.h>

int main(){

    int i, num, sum=0, x, temp;

    printf("\nEnter Your Number: ");
    scanf("%d", &num);
    temp = num;
    while (num>0){

        x = num%10;
        sum = (sum*10)+x;
        num = num/10;
    }

    if (temp == sum){

        printf("\nYour Number %d is Palindrome Number ",temp);
    }

    else{
        printf("\nYour Number %d is Not Palindrome Number ",temp);

    }

    return 0;
}
