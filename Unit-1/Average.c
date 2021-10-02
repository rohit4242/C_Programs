#include <stdio.h>
int main() {
    
    int num_1, num_2, num_3; 
    float average;
   
    printf("\t\t** average Calculator. **");
    printf("\nEnter Your First Number: ");
    scanf("%d", &num_1);
    printf("\nEnter Your Second Number: ");
    scanf("%d", &num_2);
    printf("\nEnter Your Third Number: ");
    scanf("%d", &num_3);

    average = (float)(num_1+num_2+num_3)/3;
    
    printf("\nYour Average Number is: %.2f\n", average);

    printf("\n\n** Thank You For Using This Calculator **");

    return 0;
}