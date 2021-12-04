/* 1. Enter N elements and print them. */

#include <stdio.h>

int main(){

    int n, a[50];
    
    printf("\nEnter How Many Values: ");
    scanf("%d",&n);

    for(int i = 0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nYour All Array Elements is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}