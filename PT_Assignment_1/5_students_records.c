/*
Write a menu driven C program which creates student structure with appropriate
attributes and give the following option in menu.
1) Add record in File.
2) Search Record from file based on Roll No
3) Display All records.
*/
#include <stdio.h>
#include <string.h>

struct student 
{
    int roll_no;
    int marks;
    char name[10];
}s1;

void add()
{
    FILE  *fp;
    int n,i;

    fp = fopen("student_record.txt","ab");
    if(fp == NULL)
    {
        printf("\nError opening file");
    }
    printf("\nEnter how many records add: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Details of Student %d",i+1);
        printf("\n===========================");
        fflush(stdin);
        printf("\nEnter Your Name:");
        gets(s1.name);
        printf("\nEnter Roll No:");
        scanf("%d",&s1.roll_no);
        printf("\nEnter Your Marks:");
        scanf("%d",&s1.marks);
        
        fwrite(&s1,sizeof(s1),1,fp);
    }
    fclose(fp);
    
}

void view()
{
    FILE  *fp;

    fp = fopen("student_record.txt","rb");
    if(fp == NULL)
    {
        printf("\nError opening file");
    }
    while(fread(&s1,sizeof(s1),1,fp)==1)
    {
        printf("\n=======================");
        printf("\nStudent Name: %s",s1.name);
        printf("\nRoll No: %d",s1.roll_no);
        printf("\nYour Marks: %d",s1.marks);
    }
    fclose(fp);
}

int main()
{
    int ch;

    printf("\n1.Add record in File.");
    printf("\n2.Display All records.");
    printf("\n3.Exit");

    printf("\nEnter Your Choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            add();
            break;
        case 2:
            view();
            break;
        case 3:
            exit(0);
        default:
            printf("\nError");
    }
    return 0;
}
