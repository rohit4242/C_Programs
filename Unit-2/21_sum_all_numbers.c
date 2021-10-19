/*21. Accept 10 numbers from user one by one and displays its
total value on screen.*/

#include <stdio.h>

int main(){

    int i, num, sum;

    for (i=1;i<=10;i++){

    printf("\nEnter Number %d : ", i);
    scanf("%d", &num);

    sum = sum+num;

    } 
    printf("\nYour Total Sum is: %d", sum);

    return 0;
}
