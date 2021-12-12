/* write a C program which takes input of 5 subjects marks using array and display total marks,per,result(pass/fail) [passing marks is 40 in each subject] */

#include <stdio.h>

int main(){

    int i, sub[5], sum=0; 
    float per;
    
    printf("\nEnter Your 5 subject Marks: ");

    for(int i = 0; i<5;i++)
    {
        scanf("%d",&sub[i]);
        sum = sum+sub[i];
    }

    per = sum/5;
    printf("\nYour Total Marks is: %d",sum);
    printf("\nYour Total Percentage is: %.2f",per);

    if (sub[0]>=40&&sub[1]>=40&&sub[2]>=40&&sub[3]>=40&&sub[4]>=40)
    {
        if(per>=90){
            printf("\nGrade A");
        }
        else if(per>=80)
        {
            printf("\nGrade B");
        }
        else if(per>=70)
        {
            printf("\nGrade C");
        }
        else if(per>=60)
        {
            printf("\nGrade D");
        }
        else if(per>=40)
        {
            printf("\nGrade E");
        }
        else
        {
            printf("\nYou Are Not Eligible For Grade");
        }
    }
    else 
    {
        printf("\nYou Are Fail The Exam");
    }



    return 0;

}