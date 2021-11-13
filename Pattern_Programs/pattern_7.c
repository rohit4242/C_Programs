/*

A 
 B  C
 D  E  F
 G  H  I  J
 K  L  M  N  O

*/

#include <stdio.h>
int main(){

    int i, j, num, p;

    printf("\nEnter Your Number To Print Pattern: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            p = 0;
        }
        else
        {
            p = 1;
        }
        for(j=1;j<=i;j++)
        {
            printf(" %d ",p);
            p = !p;
            
        }
        printf("\n");
    }

}