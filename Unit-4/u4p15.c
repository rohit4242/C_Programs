/* 15. Enter N elements and find out sum of prime numbers using dynamic array. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, sum=0,*ptr;
    int j, p;
    
    printf("\nEnter The Number Of Elements: ");
    scanf("%d",&N);

    ptr = (int*)malloc(N*sizeof(int));
 
    for(int i=0;i<N;i++)
    {
        printf("\nEnter value %d: ",i+1);
        scanf("%d",ptr+i);
    }

     for(int i=0;i<N;i++)
    {
        j = 2;
        p = 1;
        while(j<*(ptr+i))
        {
            if(*(ptr+i)%j==0)
            {
                p = 0;
                break;
            }
            j++;
        }
        if(p==1)
        {
            printf("%d ",*(ptr+i));
            sum = sum + *(ptr+i);
        }
    }
    printf("\nSum of prime numbers is: %d",sum);

    free(ptr);
    return 0;

}