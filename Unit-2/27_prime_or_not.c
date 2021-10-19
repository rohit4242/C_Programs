/*27. Write a program that input number and find out number is
Prime or not.*/


#include <stdio.h>

int main(){

    int num, i, x=0;

    printf("\nEnter You Want to Print Number: ");
    scanf("%d", &num);

    for (i=2; i<num/2;i++){
        if(num%i==0){
            x = 1;
            break;
        }
    }

    if (num==1){
        printf("1 is Not A Prime Number");
    }

    else if(x==0){

        printf("\n %d is Prime Number", num);
    }

    else {
        printf("\n%d is Not Prime Number",num);
    }
     
    return 0;
}
