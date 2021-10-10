#include <stdio.h>

int main(){

    int num, first_num=0, second_num=1, next;

    printf("\nEnter You Want to Print Number: ");
    scanf("%d", &num);

    printf("\nYour Fibonacci Series is: %d, %d, ", first_num+second_num);
    next = first_num+second_num;

    while(next<=num){
        printf("%d, ", next);
        first_num = second_num;
        second_num = next;
        next = first_num + second_num;
        }
     
    return 0;
}
