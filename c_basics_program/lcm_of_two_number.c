#include <stdio.h>

int main()
{
    int x, y, a, b, lcm;
    printf("\nEnter The First Number: ");
    scanf("%d",&x);
    printf("\nEnter The Second Number: ");
    scanf("%d",&y);
    a = x; 
    b = y;
    while (a!=b)
    {
        if(a<b)
        {
            a+=x;
        }
        else 
        {
            b+=y;
        }
    }
    printf("\nLCM of %d and %d is: %d", x, y, a);

}