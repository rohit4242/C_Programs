#include <stdio.h>

int main(){

    int num;

    printf("\nEnter You Want to Print Number: ");
    scanf("%d", &num);

    while(num>=180){

        printf("%d ", num);
        
        num = num-2;
    }
     
    return 0;
}
