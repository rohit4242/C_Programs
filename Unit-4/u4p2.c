/* 2. Enter N elements and find total and average of them */

#include <stdio.h>

int main(){

    int n, a[50], sum=0, avg;
    
    printf("\nEnter The Number Of Elements: ");
    scanf("%d",&n);

    for(int i = 0; i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
    
    avg = sum/n;
    printf("\nYour Sum Of Elements is: %d", sum);
    printf("\nYour Average is: %d", avg);
    return 0;

}