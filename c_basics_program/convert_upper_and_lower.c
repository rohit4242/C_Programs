#include <stdio.h>

int main() {

    char ch; 
    
    printf("\nEnter Any Character: ");
    scanf("%c", &ch);

    if ((ch>='a') && (ch<='z'))
    {
        printf("\nYour %c Small letter To Upper letter is: %c",ch, ch-32);
    } 
    else if ((ch>='A') && (ch<='Z'))
    {
        printf("\nYour Upper letter To Small letter is: %c",ch, ch+32);    
    }
    else
    {
        printf("\nInvalid character");
    }

    return 0;
}