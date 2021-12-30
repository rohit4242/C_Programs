/* 14. Enter N elements and find out sum and average of them using dynamic array.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, sum=0,*ptr;
    float avg;
    
    printf("\nEnter The Number Of Elements: ");
    scanf("%d",&N);

    ptr = (int*)malloc(N*sizeof(int));
 
    for(int i=0;i<N;i++)
    {
        printf("\nEnter value %d: ",i+1);
        scanf("%d",ptr+i);
        sum += *(ptr+i);
        
    }

    avg = (float) sum/N;
    printf("\nYour Sum Of Elements is: %d", sum);
    printf("\nYour Average is: %.2f", avg);

    free(ptr);
    return 0;

}