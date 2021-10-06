#include <stdio.h>
int main() {
    
    int sub_1, sub_2, sub_3, sub_4, sub_5, total; 
    float percentage;
   
    printf("\t\t** percentage Calculator. **");
    printf("\nEnter Your First Subject Marks: ");
    scanf("%d", &sub_1);
    printf("\nEnter Your Second Subject Marks: ");
    scanf("%d", &sub_2);
    printf("\nEnter Your Third Subject Marks: ");
    scanf("%d", &sub_3);
    printf("\nEnter Your Forth Subject Marks: ");
    scanf("%d", &sub_4);
    printf("\nEnter Your Fifth Subject Marks: ");
    scanf("%d", &sub_5);
  
    total = sub_1+sub_2+sub_3+sub_4+sub_5;
    percentage = total/5;

    printf("\nSum of all Subject Marks: %d", total);
    printf("\nYour Percentage is: %.2f\n", percentage);

    printf("\n\n** Thank You For Using This Calculator **");

    return 0;
}
