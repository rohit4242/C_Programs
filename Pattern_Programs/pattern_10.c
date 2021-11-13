/*

 $ 
 $  $
 $  $  $
 $  $  $  $
 $  $  $  $  $

*/

#include <stdio.h>
int main(){

    int i, j;
    char s[20];

    printf("\nEnter Your Name: ");
    scanf("%s",&s);

    for(i=0;s[i] != '\0';i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" %c ",s[j]);
        }
        printf("\n");
    }
}