#include <stdio.h>

int main(){

    int num_1, num_2, num_3, max;

    printf("\nEnter Your First Number: ");
    scanf("%d", &num_1);
    printf("\nEnter Your Second Number: ");
    scanf("%d", &num_2);
    printf("\nEnter Your Third Number: ");
    scanf("%d", &num_3);
    
    if ((num_1>num_2) && (num_1>num_3)){
        
        max = num_1;
    }
    else if(num_2>num_3){

        max = num_2;
    }
    else {

        max = num_3;
    }
    
    printf("\nMaximum Number of All Three Numbers is: %d", max);

    return 0;
}
