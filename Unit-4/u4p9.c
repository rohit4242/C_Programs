/*9. Enter a string and find out length of string with using string function and without string
function*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[15],len;
    
    printf("\nEnter Your String: ");
    gets(str);
    
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("\nYour String is: %s",str);
    
    printf("\nYour String Length is: %d",strlen(str));
    printf("\nYour String Length is: %d",len);
    

    return 0;
}
