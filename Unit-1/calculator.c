#include <stdio.h>
int main() {
    
    int a, b, addition, subtraction, multiplication, division;
   
    printf("\t\t** This Calculator Perform All Arithmetic Operations. **");
    printf("\nEnter Your First Number: ");
    scanf("%d", &a);
    printf("\nEnter Your Second Number: ");
    scanf("%d", &b);

    addition = a+b;
    subtraction = a-b;
    multiplication = a * b;
    division = a/b;
    
    printf("\nYour Entered Numbers is: %d  %d\n", a, b);

    printf("\nYour additions is: %d", addition);
    printf("\nYour subtractions is: %d", subtraction);
    printf("\nYour multiplications is: %d", multiplication);
    printf("\nYour divisions is: %d", division);

    printf("\n\n** Thank You For Using This Calculator **");

    return 0;
}