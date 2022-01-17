/* 9. Write a program to write string in “greencity.txt” and print it in reverse order
in file “cleancity.txt” */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE  *fp1,*fp2;
    int *ptr, n;

    printf("\nEnter length of String: ");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));

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
    
    while(fgets(ptr,ptr,fp1)!=NULL)
    {
        strrev(ptr);
        fputs(ptr,fp2);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}


