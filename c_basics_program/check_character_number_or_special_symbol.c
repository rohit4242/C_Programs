#include <stdio.h>

int main() {

    char ch; 
    
    printf("\nEnter Any Character: ");
    scanf("%c", &ch);

    if ((ch>='a') && (ch<='z'))
    {
        printf("\n%c is a small character",ch);
    } 
    else if ((ch>='A') && (ch<='Z'))
    {
        printf("\n%c is a Capital character",ch);
    }
    else if ((ch>='0') && (ch<='9'))
    {
        printf("\n%c is a number",ch);
    }
    else
    {
        printf("\n%c is a special symbol",ch);
    }

    return 0;
}