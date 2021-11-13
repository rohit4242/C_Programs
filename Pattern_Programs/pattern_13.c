/*

    * 
   * *
  * * *
 * * * *
* * * * *

*/

#include <stdio.h>
int main(){

    int i, k, j, num;

    printf("\nEnter Your Number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(k=1;k<=num-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");

    }
}