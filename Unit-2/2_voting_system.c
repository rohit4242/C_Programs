#include <stdio.h>

int main(){

    int age;

    printf("\nEnter Your Age: ");
    scanf("%d", &age);

    if (age>=18){

        printf("\nYour Eligible For Vote");
    }
    else {
        printf("\nSorry! Your Not Eligible For Vote");
    }

    return 0;
}