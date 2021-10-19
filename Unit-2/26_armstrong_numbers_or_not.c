/*26. Write a program that input number and find out number is
Armstrong or not.*/


#include <stdio.h>

int main(){

    int i, num, x, sum=0, temp;

    printf("\nEnter Your Number: ");
    scanf("%d", &num);

    temp = num;

    while (num>0){

        x = num%10;
        sum =sum +(x*x*x);
        num = num/10;

    }
    printf("\n%d",sum);

    if (temp == sum){

        printf("\nYour Number %d is Armstrong Number ",temp);
    }

    else{
        printf("\nYour Number %d is Not Armstrong Number ",temp);

    }

    return 0;
}
