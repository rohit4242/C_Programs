#include <stdio.h>

int main(){

    int a, middle_num, square, num;

    printf("\nEnter Your Number: ");
    scanf("%d",&num);

    // logic
    a = num/1; // return first two digit from number
    middle_num = a%10; // return middle number

    square = middle_num * middle_num; // square of middle number

    printf("\n %d", a);

    printf("\n\nYour Middle Number is: %d", middle_num);
    printf("\nYour Square is: %d", square);

    return 0;

}
