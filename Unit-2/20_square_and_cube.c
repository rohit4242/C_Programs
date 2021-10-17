// 20. Print first 10 natural number with its square and cube.

#include <stdio.h>

int main(){

    int i, num;

    printf("\nEnter You Want to Print Number: ");
    scanf("%d", &num);

    printf("\nNumber\tSquare\tCube");
    printf("\n======================");

    for (i=1;i<=num;i++){

        printf("\n%d\t%d\t%d",i, i*i, i*i*i);
        
    } 
    return 0;
}
