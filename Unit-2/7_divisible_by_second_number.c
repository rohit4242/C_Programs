#include <stdio.h>

int main(){

    int first_num, second_num;

    printf("\nEnter Your First Number: ");
    scanf("%d", &first_num);
    printf("\nEnter Your Second Number: ");
    scanf("%d", &second_num);
    
    if (first_num % second_num == 0){

        printf("\n%d is divisible by %d", first_num, second_num);
    }
    else {
        printf("\n%d is not divisible by %d", first_num, second_num);
    }

    return 0;
}