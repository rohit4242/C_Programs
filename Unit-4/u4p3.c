/*3. Enter N elements and find maximum and minimum value.*/

#include <stdio.h>
int main()
{
    int N,num[50],max,min;

    printf("\nEnter Numbers of Elements: ");
    scanf(" %d",&N);

    for(int i=0;i<N;i++)
    {
        printf("\nEnter value of num[%d]: ",i);
        scanf(" %d",&num[i]);
    }

    max = num[0];
    min = num[0];
    for(int i=0;i<N;i++)
    {
        if(num[i]>max)
        {
            max = num[i];
        }
    }

    for(int i=0;i<N;i++)
    {
        if(num[i]<min)
        {
            min = num[i];
        }
    }

    printf("\nYour Maximum Numbers in Array is: %d",max);
    printf("\nYour Minimum Numbers in Array is: %d",min);

    return 0;
}