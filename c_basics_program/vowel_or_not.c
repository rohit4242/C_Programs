#include <stdio.h>
int main() {

    char ch; 
    

    printf("\nEnter Your Charactur: ");
    scanf("%c", &ch);
    
    if ((ch>='A') && (ch<='Z') || (ch>='a') && (ch<='z'))
    {
        if (ch=='a'|| ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
        {

            printf("\n%c is a vowel charactur");
        } 

        else
        {
            printf("\n %c is not vowel charactur");
        }
    }
    else
    {
        printf("\nEnter The only A-Z Charactur");
    }
 
    return 0;
}