/*23. Write a program that input number and find out sum of
digits.*/

#include <stdio.h>

int main(){

    int i, num, sum=0, temp;

    printf("\nEnter Your Number: ");
    scanf("%d", &num);

    while (num>0){

        temp = num%10;
        sum = sum+temp;
        num = num/10;
    } 
    printf("\nYour Total Sum is: %d", sum);

    return 0;
}
