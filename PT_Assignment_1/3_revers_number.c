/*Write a C program which return reverse number of given number using UDF.*/

#include <stdio.h>
#include <alludf.h>

int main()
{
    int num, rev;

    printf("\nEnter any number: ");
    scanf("%d",&num);

    rev = reverse_num(num);

    printf("\nYour revers number is: %d",rev);

    return 0;
}
