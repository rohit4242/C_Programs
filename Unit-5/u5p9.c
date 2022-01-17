/* 9. Write a program to write string in “greencity.txt” and print it in reverse order
in file “cleancity.txt” */

#include <stdio.h>

int main()
{
    FILE  *fp1,*fp2;
    char ch[50];

    if((fp1=fopen("greencity.txt","r"))==NULL)
    {
        printf("\nError opening greencity.txt file");
        exit(1);
    }
    if((fp2=fopen("cleancity.txt","w"))==NULL)
    {
        printf("\nError opening cleancity.txt file");
        exit(1);
    }
    
    while(fgets(ch,50,fp1)!=NULL)
    {
        strrev(ch);
        fputs(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}


