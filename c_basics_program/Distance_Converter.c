#include <stdio.h>
int main() {
    
    int km; 
    float  Meter, Feet, Inches,  Centimeter;
   
    printf("\t\t** percentage Calculator. **");
    printf("\nEnter Your Kilometres: ");
    scanf("%d", &km);
  
    Meter       = km * 1000;
    Feet        = km * 3280.84;
    Inches      = km * 39370.1;
    Centimeter  = km * 100000;
   
    printf("\n%d Kilometres into %.2f Meters",km, Meter);
    printf("\n%d Kilometres into %.2f Feets",km, Feet);
    printf("\n%d Kilometres into %.2f Inches",km, Inches);
    printf("\n%d Kilometres into %.2f Centimeters",km, Centimeter);

    printf("\n\n** Thank You For Using This Calculator **");

    return 0;
}
