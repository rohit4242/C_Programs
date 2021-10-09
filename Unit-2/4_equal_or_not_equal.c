#include <stdio.h>

int main(){

    int num_1, num_2;

    printf("\nEnter Your First Number: ");
    scanf("%d", &num_1);
    printf("\nEnter Your Second Number: ");
    scanf("%d", &num_2);
    
    if (num_1==num_2){

        printf("\nBoth Number Are Equal: %d=%d", num_1, num_2);
    }
    else {
        printf("\nBoth Number Are Not Equal");
    }

    return 0;
}