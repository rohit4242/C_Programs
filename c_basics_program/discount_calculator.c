#include <stdio.h>

int main(){

    int qty, price, discount;
    float total_amount, total_discount, final_payment;

    printf("\nEnter Purchase Qty: ");
    scanf("%d", &qty);
    printf("\nEnter Price Per Item: ");
    scanf("%d", &price);
    printf("\nEnter Discount: ");
    scanf("%d", &discount);

    total_amount = qty*price;
    total_discount = (total_amount*discount)/100;
    final_payment = total_amount-total_discount;

    printf("\nYour Total Amount is: %.2f", total_amount);
    printf("\nYour Total Discount is: %.2f", total_discount);
    printf("\nYour Final Payment is: %.2f", final_payment);

    return 0;

}