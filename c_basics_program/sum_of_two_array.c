#include <stdio.h>

int main()
{
    int num1[50],num2[50], num3[50],n,i;

    printf("\nEnter how many values stor in array: ");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        printf("\nEnter value of num1[%d]: ",i);
        scanf("%d", &num1[i]);
    }

    printf("\n=========================");

    for (i=0;i<n;i++)
    {
        printf("\nEnter value of num2[%d]: ",i);
        scanf("%d", &num2[i]);
    }

    for(i=0;i<n;i++)
    {
        num3[i] = num1[i]+num2[i];
    }
    
    for(i=0;i<n;i++)
    {
        printf("\nnum3[%d] = %d",i, num3[i]);
    }

    return 0;
}