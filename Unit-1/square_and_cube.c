#include <stdio.h>
int main() {
    
    int a, square, cube; 
    
    printf("\t\t** Find Out square and cube. **");
    printf("\nEnter Your Number: ");
    scanf("%d", &a);
    
    square = a*a;
    printf("\nSquare Of %d is = %d", a, square);

    cube = square*a;    
    printf("\nCube Of %d is = %d", a, cube);

    printf("\n\n** Thank You For Using This Calculator **");

    return 0;
}