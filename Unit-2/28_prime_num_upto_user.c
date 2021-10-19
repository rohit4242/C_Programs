/*28. Write a program to find out prime numbers up to user
series.*/

/*27. Write a program that input number and find out number is
Prime or not.*/


#include <stdio.h>

int main(){

    int num, i,j, x;

    printf("\nEnter You Want to Print Number: ");
    scanf("%d", &num);
    printf("\nYour Prime Numbers is: ");

    for (i=1; i<=num;i++){
        x = 0;
        for (j=1;j<=num;j++){
            if (i%j==0){
                x++;
            }
            
        }
        if(x==2){
            printf("%d ",i);
        }
    }
     
    return 0;
}
