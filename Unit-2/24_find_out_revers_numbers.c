/*24. Write a program that input number and find out reverse of
that number.*/


#include <stdio.h>

int main(){

    int i, num, sum=0, temp;

    printf("\nEnter Your Number: ");
    scanf("%d", &num);

    while (num>0){

        temp = num%10;
        sum = (sum*10)+temp;
        num = num/10;
    } 
    printf("\nYour Total Sum is: %d", sum);

    return 0;
}
