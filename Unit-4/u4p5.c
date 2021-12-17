/*5. Copy the elements of one array into another.*/

#include <stdio.h>
int main()
{
    int N,arr1[50],arr2[50];

    printf("\nEnter Numbers of Elements: ");
    scanf(" %d",&N);

    for(int i=0;i<N;i++)
    {
        printf("\nEnter value of arr1[%d]: ",i);
        scanf(" %d",&arr1[i]);
    }
    
    for(int i=0;i<N;i++)
    {
        arr2[i] = arr1[i];
    }

    for(int i=0;i<N;i++)
    {
        printf("\narr1[%d] = %d",i,arr1[i]);
    }

    printf("\n============");

    for(int i=0;i<N;i++)
    {
        printf("\narr2[%d] = %d",i,arr2[i]);
    }

    return 0;
}