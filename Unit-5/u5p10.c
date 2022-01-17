/* 10. Write a program to write a file DATA.Txt which has 1 to 10 numbers and then
read this file. If number is odd then store it in “ODD.txt” and if it is even store it
in “EVEN.txt”
*/

#include <stdio.h>

int main()
{
    FILE  *fp1,*fp2,*fp3;
    int ch;

    if((fp1 = fopen("DATA.txt","r"))== NULL)
    {
        printf("\nError opening data.txt file");
        exit(1);
    }
    
    if((fp2=fopen("EVEN.txt","w"))==NULL)
    {
        printf("\nError opening even.txt file");
        exit(1);
    }

    if((fp3=fopen("ODD.txt","w"))==NULL)
    {
        printf("\nError opening odd.txt file");
        exit(1);
    }
            
    while(fscanf(fp1,"%d",&ch)!=EOF)
    {
        if(ch%2==0)
        {
            fprintf(fp2,"%d\n",ch);
        }
        else
        {
            fprintf(fp3,"%d\n",ch);
        }
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}


