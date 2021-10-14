#include <stdio.h>

int main(){

    int num;

    printf("\nEnter Your Number: ");
    scanf("%d", &num);
    
    if (num%2==0){

        printf("\n%d is even Number", num);
    }
   
    else {
        printf("\n%d is odd Number", num);
    }

    return 0;
}
