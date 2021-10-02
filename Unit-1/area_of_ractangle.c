#include <stdio.h>
int main() {
    
    int length, breagth, area; 
    
    printf("\t\t** Find Out Area Of Ractangle. **");
    printf("\nEnter The Length Of Ractangle: ");
    scanf("%d", &length);
    printf("\nEnter The Breagth Of Ractangle: ");
    scanf("%d", &breagth);
    
    area = length * breagth;
    
    printf("\nYour Total Area Of Ractangle: %d\n", area);

    printf("\n\n** Thank You For Using This Calculator **");

    return 0;
}