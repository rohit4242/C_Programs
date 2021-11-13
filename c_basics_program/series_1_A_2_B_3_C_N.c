/* Write a C program which display the following series 1 A 2 B 3 C 4 D.....N*/

#include <stdio.h>
int main(){

    int i, j=65, num;

    printf("\nEnter Your Number To Print Series: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        printf("%d %c ",i, j++);
    }

    return 0;
}