/*13. Find out maximum and minimum number using pointer to function.*/

#include <stdio.h>
#include <stdlib.h>

void max_using_pointer(int arr[],int len,int *max, int *min)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(arr[i]>*max)
            *max = arr[i];
        else if(arr[i]<*min)
            *min = arr[i];
    }
}
// void min_using_pointer(int arr[],int len,int*min)
// {
//     int i;
//     for(i=0;i<len;i++)
//     {
//         if(arr[i]<*min)
//         {
//             *min = arr[i];
//         }
//     }
// }
int main()
{
    int N,num[50],max,min;

    printf("\nEnter Numbers of Elements: ");
    scanf(" %d",&N);

    for(int i=0;i<N;i++)
    {
        printf("\nEnter value of num[%d]: ",i);
        scanf(" %d",&num[i]);
    }

    max_using_pointer(num,N,&max,&min);
    // min_using_pointer(num,N,&min);

    printf("\nYour Maximum Numbers is: %d",max);
    printf("\nYour Minimum Numbers is: %d",min);

    system("pause");

    return 0;
}