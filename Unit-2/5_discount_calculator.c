#include <stdio.h>

int main(){

    int qty, price;
    float total_amount, total_discount, final_payment;

    printf("\nEnter Purchase Qty: ");
    scanf("%d", &qty);
    printf("\nEnter Price Per Item: ");
    scanf("%d", &price);
    
    total_amount = qty*price;
    printf("\nYour Total Amount is: %.2f", total_amount);

    if (total_amount>=1000){

        total_discount = (total_amount*15)/100;
        printf("\n----------------------------------");
        printf("\nYour Total 15\% Discount is: %.2f", total_discount);
    }
    else {
        total_discount = (total_amount*10)/100;
        printf("\n----------------------------------");
        printf("\nYour Total 10\% Discount is: %.2f", total_discount);

    }

    final_payment = total_amount-total_discount;
    printf("\n----------------------------------");
    printf("\nYour Final Payment is: %.2f", final_payment);
    printf("\n----------------------------------");


    return 0;

}