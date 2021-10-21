#include <stdio.h>
int main() {

    char ch; 
    
    printf("\nEnter Your Charactur: ");
    scanf("%c", &ch);

    if ((ch>='A') && (ch<='Z'))
    {

        printf("\n%c is a Capital latter");
    } 
    else
    {
        printf("\n %c is a Small letter");
    }

    return 0;
}