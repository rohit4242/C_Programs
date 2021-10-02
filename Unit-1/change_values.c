#include <stdio.h>
int main() {
    
    int a, b, c; 
   
    printf("\t\t** Interchange The Values. **");
    
    printf("\nEnter Your First Number: ");
    scanf("%d", &a);
    printf("\nEnter Your Second Number: ");
    scanf("%d", &b);

    printf("\nBefore Swapping \na = %d\nb = %d", a, b);

    c = a;
    a = b;
    b = c;
    
    printf("\nAfter Swapping \na = %d\nb = %d", a, b);

    printf("\n\n** Thank You For Using This Calculator **");

    return 0;
}