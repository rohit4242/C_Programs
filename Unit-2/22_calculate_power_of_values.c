// 22. Input x and y calculate its power value

#include <math.h>
#include <stdio.h>

int main(){

    int x, y;
    double power;

    printf("\nEnter Value Of X: ");
    scanf("%d", &x);
    printf("\nEnter Value Of Y: ");
    scanf("%d", &y);

    power = pow(x, y);

    printf("\nYour %d Power %d is: %.2lf",x, y, power);

    return 0;
}
