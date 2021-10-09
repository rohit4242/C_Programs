#include <stdio.h>

int main(){

    int year;

    printf("\nEnter Your First Number: ");
    scanf("%d", &year);
    
    if (year % 400 == 0){
        printf("\n%d is a leap year", year);
    }
    else if(year % 100 == 0){
        printf("\n%d is not a leap year", year);

    }
    else if(year % 4 == 0){
        printf("\n%d is a leap year", year);

    }
    else {
        printf("\n%d is not a leap year", year);
    }
    
    return 0;
}