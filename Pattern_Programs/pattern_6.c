/*

1 
 2  3
 4  5  6
 7  8  9  10
 11  12  13  14  15

*/

#include <stdio.h>
int main(){

    int i, j, num, p=65;

    printf("\nEnter Your Number To Print Pattern: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c ",p++);
            
        }
        printf("\n");
    }

}