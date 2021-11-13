/*

 5 
 5  4
 5  4  3
 5  4  3  2
 5  4  3  2  1
*/

#include <stdio.h>
int main(){

    int i, j, num;
    char s;

    printf("\nEnter Your Number To Print Pattern: ");
    scanf("%d",&num);
    printf("\nEnter Your Symnol: ");
    fflush(stdin);
    scanf("%c",&s);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c ",s);
        }
        printf("\n");
    }
}