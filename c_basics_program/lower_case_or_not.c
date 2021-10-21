#include <stdio.h>
int main() {

    char ch; 
    
    printf("\nEnter Your Charactur: ");
    scanf("%c", &ch);

    if ((ch>='a') && (ch<='z'))
    {

        printf("\n%c is a lower case");
    } 

    else
    {
        printf("\n %c is not lower case");
    }

    return 0;
}