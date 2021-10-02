#include <stdio.h>
int main() {
    
    int a, b; 
   
    printf("\t\t** Interchange The Values. **");
    printf("\nEnter Your First Number: ");
    scanf("%d", &a);
    printf("\nEnter Your Second Number: ");
    scanf("%d", &b);
    
    printf("\nBefore Swapping \na = %d\nb = %d", a, b);

    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("\nAfter Swapping \na = %d\nb = %d", a, b);

    printf("\n\n** Thank You For Using This Calculator **");

    return 0;
}
