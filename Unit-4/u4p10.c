/*10. Enter String and Check the string is palindrome or not.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[15];
    int len, temp=0;
    
    printf("\nEnter Your String: ");
    gets(str);
    len = strlen(str);

    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            temp =1;
            break;
        }
    }
    printf("\nYour String is: %s",str);
    
    if(temp)
    {
        printf("\nYour String is Not Palindrome");
    }
    else
    {
        printf("\nYour String is Palindrome"); 
        
    }

    return 0;
}
