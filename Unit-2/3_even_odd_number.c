#include <stdio.h>

int main(){

    int num;

    printf("\nEnter Your Number: ");
    scanf("%d", &num);
    
    if (num%2==0){

        printf("\n%d is even Number", num);
    }
    // else if(num_2>num_1){

    //     printf("\nYour Maximum Number is: %d", num_2);
    //     printf("\nYour Minimum Number is: %d", num_1);

    // }
    else {
        printf("\n%d is odd Number", num);
    }

    return 0;
}