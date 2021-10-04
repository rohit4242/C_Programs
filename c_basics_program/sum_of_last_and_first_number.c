#include <stdio.h>
int main() {

    int num, first_num, last_num, sum; 
    
    printf("\nEnter Your Number: ");
    scanf("%d", &num);
    
    first_num = num /100;
    last_num = num % 10;
    sum = first_num + last_num;
    
    printf("\nYour Sum is: %d", sum);

    return 0;
}