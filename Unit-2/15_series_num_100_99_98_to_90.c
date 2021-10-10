#include <stdio.h>

int main(){

    int num;

    printf("\nEnter You Want to Print Number: ");
    scanf("%d", &num);

    while(num>=90){

        printf("%d ", num);

        num--;
    }
     
    return 0;
}
