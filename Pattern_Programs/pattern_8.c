/*

 1 
 0  1
 1  0  1
 0  1  0  1
 1  0  1  0  1
*/

#include <stdio.h>
int main(){

    int i, j, num;

    printf("\nEnter Your Number To Print Pattern: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        
        for(j=5;j>=6-i;j--)
        {
            printf(" %d ",j);

        }
        printf("\n");
    }
}