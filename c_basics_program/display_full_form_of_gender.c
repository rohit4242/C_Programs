#include <stdio.h>
int main() {

    char gender; 
    

    printf("\nEnter Your gender (M/m, F/f): ");
    scanf("%c", &gender);
    
    if ((gender=='M') || (gender=='m'))
    {
        printf("\nThe Full Form is: Male");
    }

    else if(gender=='F' || gender=='f')
    {
        printf("\nThe Full Form is: Female");
    }

    else{

        printf("\nThe Input Is Not Alphabat");
    }


    return 0;
}