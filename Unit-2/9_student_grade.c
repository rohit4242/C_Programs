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

    if ((percentage<=100) && (percentage>=0)) {
        if(percentage >= 90)
        {
            printf("Grade A");
        }
        else if(percentage >= 80)
        {
            printf("Grade B");
        }
        else if(percentage >= 70)
        {
            printf("Grade C");
        }
        else if(percentage >= 60)
        {
            printf("Grade D");
        }
        else if(percentage >= 40)
        {
            printf("Grade E");
        }
        else
        {
            printf("You Are Fail The Exam");
        }
    }
    else{
        printf("\nWorng Enter The Current Marks Try Again");
    }

    return 0;
}