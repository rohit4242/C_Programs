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
    char first_name[10];
    char last_name[10];
    char mobile_no[10];
};
void add()
{
    FILE  *fp=NULL;
    struct student s1;

    fp = fopen("record.txt","wb");
    if(fp == NULL)
    {
        printf("\nError opening file");
    }
    printf("\nEnter Student Details");

    printf("\nEnter Roll No:");
    scanf("%d",&s1.roll_no);
    fflush(stdin);
    printf("\nEnter First Name:");
    gets(s1.first_name);
    printf("\nEnter last Name:");
    gets(s1.last_name);
    printf("\nEnter Mobile Number:");
    gets(s1.mobile_no);
    printf("\nEnter Your Marks:");
    scanf("%d",&s1.marks);

    fwrite(&s1,sizeof(s1),1,fp);
    fclose(fp);
}
void view()
{
    FILE  *fp=NULL;
    struct student s1;

    fp = fopen("record.txt","rb");
    if(fp == NULL)
    {
        printf("\nError opening file");
    }
    while(fread(&s1,sizeof(s1),1,fp)==1)
    {
    printf("\nRoll No: %d",&s1.roll_no);
    printf("\nFirst Name:",&s1.first_name);
    printf("\nEnter last Name:");
    printf("\nlast Name:",&s1.last_name);
    printf("\nMobile Number:",&s1.mobile_no);
    printf("\nYour Marks: %d",&s1.marks);
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