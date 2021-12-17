/*4. Enter N elements and find how many are positive, negative, even and odd.*/

#include <stdio.h>
int main()
{
    int N,num[50],pos=0, neg=0, even=0, odd=0, zero=0;

    printf("\nEnter Numbers of Elements: ");
    scanf(" %d",&N);

    for(int i=0;i<N;i++)
    {
        printf("\nEnter value of num[%d]: ",i);
        scanf(" %d",&num[i]);
    }
    
    for(int i=0;i<N;i++)
    {
        if(num[i]>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }

        if(num[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if(num[i]==0)
        {
            zero++;
        }
    }

    printf("\nPositive = %d",pos);
    printf("\nNegative = %d",neg);
    printf("\nEven = %d",even);
    printf("\nOdd = %d",odd);
    printf("\nZero = %d",zero);

    return 0;
}