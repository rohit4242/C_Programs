/*

*
* *
* * *
* * * *
* * * * *

*/

#include <stdio.h>
int main(){

    int i, j, num;

    printf("\nEnter Your Number To Print Pattern: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
