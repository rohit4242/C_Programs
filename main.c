
#include <stdio.h>

void add(int num[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nnum[%d]: ",i);
        scanf("%d",&num[i]);
    }
    printf("\n%d value added succsessfully",n);
}

void update(int arr[],int n,int new_value,int index)
{
    for(int i=0;i<n;i++)
    {
        if(i==index-1)
        {
            arr[i]=new_value;
        }
    }
    printf("\nyour value hase been update succsessfully");
}

void del(int num[],int n,int index)
{
    int new_num[10];
    for(int i=0,j=0;i<n;i++,j++)
    {
        if(i==index-1)
        {
            continue;
        }
        else
        {
            new_num[j]=num[i];
        }
    }
    printf("\nyour value hase been deleted succsessfully");
    
    for(int i=0;i<n-1;i++)
    {
        printf("\nnew_num[%d]: %d",i,new_num[i]);
    }
}

int main()
{
    char choise;
    int num[10],n,ch=1,new_value,i,index;
    do 
    {
        printf("\n1.add value");
        printf("\n2.update value");
        printf("\n3.remove value");
        printf("\n4.display value");
        printf("\n5.exit");
        
        printf("\nenter your choise: ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
                printf("\nhow many value you want to stor in array: ");
                scanf("%d",&n);
                add(num,n);
                break;
            case 2:
                printf("\nEnter index number: ");
                scanf("%d",&index);
                printf("\nenter new value: ");
                scanf("%d",&new_value);
                update(num,n,new_value,index);
                break;
            case 3:
                printf("\nEnter index number: ");
                scanf("%d",&index);
                del(num,n,index);
                break;        
            case 4:
                for(i=0;i<n;i++)
                {
                    printf("\nnum[%d]: %d",i,num[i]);
                }
                break;
            case 5:
                return 0;
                break;
            default:
                printf("\nIndvalid Input");
        }
        printf("\n Do you want to continue?(y/n)\n");
        scanf(" %c",&choise);
    }while(choise=='y');
    
    return 0;
}
