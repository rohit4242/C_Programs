/*8. Write a program to multiply two matrices.*/

#include <stdio.h>
int main()
{
    int N,arr1[50],arr2[50],mul[50];

    printf("\nEnter Numbers of Elements: ");
    scanf(" %d",&N);

    for(int i=0;i<N;i++)
    {
        printf("\nEnter value of arr1[%d]: ",i);
        scanf(" %d",&arr1[i]);
    }
    
    printf("\n============================");

    for(int i=0;i<N;i++)
    {
        printf("\nEnter value of arr2[%d]: ",i);
        scanf(" %d",&arr2[i]);
    }
    for(int i=0;i<N;i++)
    {
        mul[i] = arr1[i]*arr2[i];
    }

    for(int i=0;i<N;i++)
    {
        printf("\nmul[%d] = %d",i,mul[i]);
    }

    return 0;
}
