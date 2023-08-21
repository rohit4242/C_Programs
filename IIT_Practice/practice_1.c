#include <stdio.h>
#include <string.h>

void reverseSubstring(char *str, int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void firstMethond(char *input)
{
    int length = strlen(input);

    printf("Display All:\n");
    for (int len = 2; len <= length; len++)
    {
        for (int i = 0; i <= length - len; i++)
        {
            int j = i + len - 1;
            char temp[100];
            strcpy(temp, input);
            reverseSubstring(temp, i, j);
            printf("%s\n", temp);
        }
    }
}

void secondMethod(char *input)
{
    int length = strlen(input);

    printf("Display All:\n");
    for (int len = 2; len <= length; len++)
    {
        for (int i = 0; i <= length - len; i++)
        {
            printf("%.*s", i, input);
            for (int j = i + len - 1; j >= i; j--)
            {
                printf("%c", input[j]);
            }
            printf("%s\n", input + i + len);
        }
    }
}

int main()
{
    char input[100];
    printf("Enter Your String: ");
    scanf("%s", input);

    firstMethond(input);
    secondMethod(input);

    return 0;
}
