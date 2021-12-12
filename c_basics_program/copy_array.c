#include <stdio.h>

int main()
{
    int num1[50],num2[50],n,i, j=0;

    printf("Enter how many values stor in array: ");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        printf("Enter value of num1[%d]: ",i);
        scanf("%d", &num1[i]);
    }

    for(i=0;i<n;i++)
    {
        if(num1[i]>0)
        {
            num2[j] = num1[i];
            // printf("\nnum2[%d] = %d",i, num2[i]);
            j++;
        } 
    }
    
    for(i=0;i<j;i++)
    {
        printf("\nnum2 = %d", num2[i]);
    }

    return 0;
}