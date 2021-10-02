#include <stdio.h>
int main() {
    
    int amount, rate, time_period; 
    float interest;
   
    printf("\t\t** Interest Calculator. **");
    printf("\nEnter Your Amount: ");
    scanf("%d", &amount);
    printf("\nEnter Your Rate: ");
    scanf("%d", &rate);
    printf("\nEnter Your Time Period: ");
    scanf("%d", &time_period);

    interest = amount*rate*time_period/100;
    
    printf("\nYour Total Interest is: %f\n", interest);

    printf("\n\n** Thank You For Using This Calculator **");

    return 0;
}