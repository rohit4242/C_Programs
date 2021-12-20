/*8. Write a program to multiply two matrices.*/

#include<stdio.h>

int main()
{
	int arr1[10][10],arr2[10][10],mul[10][10],r1,c1,r2,c2;

	printf("\nEnter the number of row of First Matrix  R1 : ");
	scanf("%d",&r1);

	printf("\nEnter the number of column of First Matrix  C1 : ");
	scanf("%d",&c1);

	printf("\nEnter the number of row of Second Matrix  R2 : ");
	scanf("%d",&r2);

	printf("\nEnter the number of column of Second Matrix  C2 : ");
	scanf("%d",&c2);

	if(c1 != r2)
	{
		printf("\nmultiplication is not possible ");
		exit(0);
	}

	printf("\n Enter Elements of Matrix : 1 \n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("\n Enter values of element arr1[%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}

	printf("\nEnter elements of Matrix : 2 \n");

	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("\nEnter values of element arr2[%d][%d] : ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("\n Matrix Multiplication\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			mul[i][j]=0;
			for(int k=0;k<r2;k++)
			{
				mul[i][j]=mul[i][j] + (arr1[i][k]*arr2[k][j]); 
			}
		}
	}

	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
    
    return 0;
}