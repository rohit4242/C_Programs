/*
Write a C Program which takes input of mobile recharge amount and calculate
discount based on the following condition :
If amount is greater than or equal 500 then 30% discount
If amount is greater than or equal 300 and less than 500 then 20% discount
If amount is greater than or equal 100 and less than 300 then 10% discount
Otherwise no discount.
Finally display discount amount and final payment amount on screen.
*/

#include <stdio.h>
int main(){

    int r_amount;
    float discount, final_payment;

    printf("\nEnter Your recharge amount: ");
    scanf("%d",&r_amount);

    if(r_amount>=500)
    {
        discount = (r_amount*30)/100;
        printf("\nYour 30 Percent Discount is: %.2f",discount);
    }
    else if(r_amount>=300 && r_amount<500)
    {
        discount = (r_amount*20)/100;
        printf("\nYour 20 Percent Discount is: %.2f",discount);
    }
    else if(r_amount>=100 && r_amount<300)
    {
        discount = (r_amount*10)/100;
        printf("\nYour 10 Percent Discount is: %.2f",discount);
    }
    else
    {
        printf("\nNo Discount");
    }

    final_payment = r_amount-discount;
    printf("\nYour Final Payment is: %.2f",final_payment);

    return 0;

}