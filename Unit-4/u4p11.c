/*11. Swap two variables using pointer and function.*/

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num_1, num_2;

    printf("\nEnter Your First Number: ");
    scanf("%d",&num_1);
    printf("\nEnter Your Second Number: ");
    scanf("%d",&num_2);

    printf("\nnum_1 = %d",num_1);
    printf("\nnum_2 = %d",num_2);

    swap(&num_1,&num_2);
    printf("\n===============");

    printf("\nnum_1 = %d",num_1);
    printf("\nnum_2 = %d",num_2);

    return 0;

}