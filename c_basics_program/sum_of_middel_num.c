#include <stdio.h>

int main(){

    int a, middel_num, square, num;

    printf("\nEnter Your Number: ");
    scanf("%d",&num);

    // logic
    a = num/1; // return first two digit from number
    middel_num = a%10; // return middel number

    square = middel_num * middel_num; // square of middel number

    printf("\n %d", a);

    printf("\n\nYour Middel Number is: %d", middel_num);
    printf("\nYour Square is: %d", square);

    return 0;

}