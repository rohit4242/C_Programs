#include <stdio.h>

int main(){

    int num;

    printf("\nEnter Your Number: ");
    scanf("%d", &num);
   
    if (num==0){

        printf("\nYour Number is:%d", num);
    }
    else if(num>0){

        printf("\n%d is Positive Number", num);
    }
    else {

        printf("\n%d is Nagetive Number", num);
    }
    
    return 0;
}