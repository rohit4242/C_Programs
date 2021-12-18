/*7. Write a program to subtract two matrices.*/

#include <stdio.h>
int main()
{
    int N,arr1[50],arr2[50],sub[50];

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
        sub[i] = arr1[i]-arr2[i];
    }

    for(int i=0;i<N;i++)
    {
        printf("\nsub[%d] = %d",i,sub[i]);
    }

    return 0;
}
