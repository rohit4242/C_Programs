#include <stdio.h>
int main() {
    
    int redius;
    float area; 
    
    printf("\t\t** Find Out Area Of Circle. **");
    printf("\nEnter The Redius Of Circle: ");
    scanf("%d", &redius);
    
    area = 3.14159*redius*redius;
    
    printf("\nYour Total Area Of Circle: %.2f\n", area);

    printf("\n\n** Thank You For Using This Calculator **");

    return 0;
}