/*29. Write a program to find out Armstrong numbers up to user
series.*/



#include <stdio.h>

int main(){

    int i, num, x, sum, temp;

    printf("\nEnter Your Range To Print Armstrong Numbers: ");
    scanf("%d", &num);

    for (i=0;i<=num;i++){

        temp = i;
        sum = 0;

        while (temp!=0){

            x = temp%10;
            temp = temp/10;
            sum = sum +(x*x*x);

        }
    

        if (sum == i){
            printf("%d ", i);
        }
    }
    
printf("\n");

    return 0;
}
