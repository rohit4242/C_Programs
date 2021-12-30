/*13. Find out maximum and minimum number using pointer to function.*/

#include <stdio.h>
#include <stdlib.h>
int (*ptr) (int, int);

int max_using_pointer(int a, int b)
{
    int max;
        if(a>b)
            max = a;
        else
            max = b;
    return max;
}
int min_using_pointer(int a, int b)
{
    int min;
        if(a>b)
            min = b;
        else
            min = a;
    return min;
}
int main()
{
    int num_1,num_2;

    printf("\nEnter First Number: ");
    scanf(" %d",&num_1);
    printf("\nEnter Seconde Number: ");
    scanf(" %d",&num_2);

    ptr = max_using_pointer;
    printf("\nYour Maximum Numbers is: %d",ptr(num_1,num_2));
    ptr = min_using_pointer;
    printf("\nYour Minimum Numbers is: %d",ptr(num_1,num_2));

    return 0;
}