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

int main()
{
    char input[100];
    printf("Enter Your String: ");
    scanf("%s", input);

    int length = strlen(input);
    int count = 0;

    FILE *outputFile = fopen("output.txt", "w");

    fprintf(outputFile, "Display All:\n");
    for (int len = 2; len <= length; len++)
    {
        for (int i = 0; i <= length - len; i++)
        {
            int j = i + len - 1;
            char temp[100];
            strcpy(temp, input);
            reverseSubstring(temp, i, j);
            fprintf(outputFile, "%s\n", temp);
            count++;
        }
    }

    fprintf(outputFile, "Number Of Strings: %d\n", count);

    fclose(outputFile);

    return 0;
}
