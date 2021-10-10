#include <stdio.h>

int main(){

    int num, i;

    printf("\nEnter You Want to Print Number: ");
    scanf("%d", &num);

    for (i=0;i<=num;i++){
        
        printf("%d ", i+1);
        printf("%d ", 10-i);

    }
     
    return 0;
}
