/* 7. Write a program to copy one file into another file */

#include <stdio.h>

int main()
{
    FILE *fp1,*fp2;
    int ch;

    if((fp1=fopen("test.txt","r"))==NULL)
    {
        printf("\nError in opening file1");
        exit(1);
    }
    if((fp2=fopen("new.txt","w"))==NULL)
    {
        printf("\nError in opening file2");
        exit(1);
    }

    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);
    
    return 0;
}