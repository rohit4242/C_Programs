/* Write a program to Demonstrate difference between structure and union */

#include <stdio.h>

struct num_1
{
    int x,y;
};

union num_2
{
    int x;
    float y;
};

int main()
{
    struct num_1 n1={5,6};

    union num_2 n2;
    n2.x=5;
    n2.y=6;

    printf("\nValue of n1 is: %d and %d",n1.x,n1.y);
    printf("\nValue of n2 is: %f and %f",n2.x,n2.y);

    // size of struct and union 

    printf("\nSize of struct is %d",sizeof(n1));
    printf("\nSize of union is: %d",sizeof(n2));

    return 0;
}