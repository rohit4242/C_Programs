#include <stdio.h>

int main(){

    int num_1, num_2;

    printf("\nEnter Your First Number: ");
    scanf("%d", &num_1);
    printf("\nEnter Your Second Number: ");
    scanf("%d", &num_2);

    if (num_1>num_2){

        printf("\nYour Maximum Number is: %d", num_1);
        printf("\nYour Minimum Number is: %d", num_2);
    }
    else if(num_2>num_1){

        printf("\nYour Maximum Number is: %d", num_2);
        printf("\nYour Minimum Number is: %d", num_1);

    }
    else {
        printf("\nBoth Number Are Same: %d %d", num_1, num_2);
    }

    return 0;
}