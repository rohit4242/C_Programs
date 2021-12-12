#include <stdio.h>
int main()
{
    int a,b,n1,n2;

    printf("\nEnter Your First Number: ");
    scanf("%d",&n1);
    printf("\nEnter Your Second Number: ");
    scanf("%d",&n2);
    a = n1;
    b = n2;
    while(a!=b)
    {
        if(a>b)
        {
            a -=b;
        }
        else
        {
            b -=a;
        }
    }
    printf("\nHCF of %d and %d is: %d",n1,n2,a);

}