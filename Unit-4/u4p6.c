/*6. Write a program to add two matrices.*/

#include <stdio.h>
int main()
{
    int r, c, arr1[2][3],arr2[2][3],sum[2][3];

    printf("\nEnter Numbers of Rows: ");
    scanf(" %d",&r);
    printf("\nEnter Numbers of Columns: ");
    scanf(" %d",&c);

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter value of arr1[%d][%d]: ",i,j);
            scanf(" %d",&arr1[i][j]);
        }
    }
    
    printf("\n============================");

   
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter value of arr2[%d][%d]: ",i,j);
            scanf(" %d",&arr2[i][j]);
        }
    }

    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j] = arr1[i][j]+arr2[i][j];

        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nsum[%d][%d] = %d",i,j,sum[i][j]);

        }
    }



    return 0;
}
