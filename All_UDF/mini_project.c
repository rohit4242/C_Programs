
#include <stdio.h>
#include <alludf.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

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

void all_arithmetic_operation()
{
    int a, b, ch_2;
    printf("\nEnter Two Numbers: ");
    scanf("%d %d",&a,&b);

    printf("\n1.add");
    printf("\n2.sub");
    printf("\n3.mul");

    printf("\nEnter Your Choice: ");
    scanf("%d",&ch_2);
    
    switch(ch_2)
    {
        case 1:
            printf("\nYour Sum is: %d",sum(a,b));
            break;
        case 2:
            printf("\nYour Subtractions is: %d",sub(a,b));
            break;
        case 3:
            printf("\nYour Multiplictions is: %d",mul(a,b));
            break;
        default:
            printf("\nEnter valid input");
    }
}
void interest_1()
{
    int a, r, t; 
   
    printf("\t\t** Interest Calculator. **");
    printf("\nEnter Your Amount: ");
    scanf("%d", &a);
    printf("\nEnter Your Rate: ");
    scanf("%d", &r);
    printf("\nEnter Your Time Period: ");
    scanf("%d", &t);

    printf("\nYour Total Interest is: %f",(float)interest(a,r,t));
    
}
void area_of_circle_0()
{
    int redius;
    printf("\t** Find Out Area Of Circle. **");
    printf("\nEnter The Redius Of Circle: ");
    scanf("%d", &redius);
    area_of_circle(redius);
}

void area_of_rectangle_0()
{
    int length, breagth; 
    printf("\t\t** Find Out Area Of Ractangle. **");
    printf("\nEnter The Length Of Ractangle: ");
    scanf("%d", &length);
    printf("\nEnter The Breagth Of Ractangle: ");
    scanf("%d", &breagth);

    area_of_rectangle(length,breagth);
}

void square_and_cube_0()
{
    int a, square, cube; 
    
    printf("\t\t** Find Out square and cube. **");
    printf("\nEnter Your Number: ");
    scanf("%d", &a);
    
    square = a*a;
    printf("\nSquare Of %d is = %d", a, square);

    cube = square*a;    
    printf("\nCube Of %d is = %d", a, cube);
}

void fahrenheit_to_celsius_0()
{
    float temperature; 
    
    printf("\t\t** Find Out Temperatature Fahrenheit To Celsiuc. **");
    printf("\nEnter Temperature: ");
    scanf("%f", &temperature);
    
    printf("\nCelsius is = %.3f",fahrenheit_to_celsius(temperature));
}

void even_and_odd()
{
    int num;
    printf("\nEnter Your Number: ");
    scanf("%d", &num);
    
    if (num%2==0)
    {
        printf("\n%d is even Number", num);
    }
    else 
    {
        printf("\n%d is odd Number", num);
    }
}

void mul_table()
{
    int num, i;

    printf("\nEnter Your Multiplication Table Number: ");
    scanf("%d", &num);

    for (i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num, i, num*i);
    }
}

void fibonacci_0()
{
    int num;

    printf("\nEnter You Want to Print Number: ");
    scanf("%d", &num);

    fibonacci(num);
}

void power_value_0()
{
    int x, y;
    double power;

    printf("\nEnter Value Of X: ");
    scanf("%d", &x);
    printf("\nEnter Value Of Y: ");
    scanf("%d", &y);

    power = pow(x, y);

    printf("\nYour %d Power %d is: %.2lf",x, y, power);
}

void sum_of_digit_0()
{
    int num;
    printf("\nEnter Your Number: ");
    scanf("%d", &num);

    printf("\nYour Total Sum is: %d", sum_of_num(num));
}

void revers_num_0()
{
    int num;
    printf("\nEnter Your Number: ");
    scanf("%d", &num);

    printf("\nYour Reverse Number is: %d", reverse_num(num));
}

void palindrome_0()
{
    int num;

    printf("\nEnter Your Number: ");
    scanf("%d", &num);
    
    if (palindrome(num)==num){

        printf("\nYour Number %d is Palindrome Number ",num);
    }

    else{
        printf("\nYour Number %d is Not Palindrome Number ",num);

    }
}

void armstrong_0()
{
    int num;
    printf("\nEnter Your Number: ");
    scanf("%d", &num);

    if (armstrong(num)==num)
    {
        printf("\nYour Number %d is Armstrong Number ",num);
    }
    else
    {
        printf("\nYour Number %d is Not Armstrong Number ",num);
    }
}

void prime_num_0()
{
    int num;

    printf("\nEnter You Want to Print Number: ");
    scanf("%d", &num);

    if (num==1)
    {
        printf("1 is Not A Prime Number");
    }
    else if(prime(num)==0)
    {
        printf("\n %d is Prime Number", num);
    }
    else 
    {
        printf("\n%d is Not Prime Number",num);
    }
}

void factorial_0()
{
    int num;

    printf("\nEnter Your Number To Find Out Factorials: ");
    scanf("%d", &num);

    printf("\nThe Factorials Of %d is: %d",num,fact(num));
}

void add_two_matrix_0()
{
    int r, c, arr1[2][3],arr2[2][3],sum[2][3];

    printf("\nEnter Numbers of Rows: ");
    scanf(" %d",&r);
    printf("\nEnter Numbers of Columns: ");
    scanf(" %d",&c);

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nEnter value of arr1[%d][%d]: ",i,j);
            scanf(" %d",&arr1[i][j]);
        }
    }
    printf("\n============================");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nEnter value of arr2[%d][%d]: ",i,j);
            scanf(" %d",&arr2[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nsum[%d][%d] = %d",i,j,sum[i][j]);
        }
    }
}

void sub_two_matrix_0()
{
    int r, c, arr1[2][3],arr2[2][3],sub[2][3];

    printf("\nEnter Numbers of Rows: ");
    scanf(" %d",&r);
    printf("\nEnter Numbers of Columns: ");
    scanf(" %d",&c);

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nEnter value of arr1[%d][%d]: ",i,j);
            scanf(" %d",&arr1[i][j]);
        }
    }
    printf("\n============================");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nEnter value of arr2[%d][%d]: ",i,j);
            scanf(" %d",&arr2[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            sub[i][j] = arr1[i][j]-arr2[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nsubtraction[%d][%d] = %d",i,j,sub[i][j]);
        }
    }
}

void mul_two_matrix_0()
{
    int arr1[10][10],arr2[10][10],mul[10][10],r1,c1,r2,c2;

	printf("\nEnter the number of row of First Matrix  R1 : ");
	scanf("%d",&r1);

	printf("\nEnter the number of column of First Matrix  C1 : ");
	scanf("%d",&c1);

	printf("\nEnter the number of row of Second Matrix  R2 : ");
	scanf("%d",&r2);

	printf("\nEnter the number of column of Second Matrix  C2 : ");
	scanf("%d",&c2);

	if(c1 != r2)
	{
		printf("\nmultiplication is not possible ");
		main();
	}
	printf("\n Enter Elements of Matrix : 1 \n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("\n Enter values of element arr1[%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\nEnter elements of Matrix : 2 \n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("\nEnter values of element arr2[%d][%d] : ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("\n Matrix Multiplication\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			mul[i][j]=0;
			for(int k=0;k<r2;k++)
			{
				mul[i][j]=mul[i][j] + (arr1[i][k]*arr2[k][j]); 
			}
		}
	}
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}

void string_length()
{
    char str[50],len;
    printf("\nEnter Your String: ");
    fflush(stdin);
    gets(str);
    
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("\nYour String is: %s",str);
    printf("\nYour String Length is: %d",len);
}
int main()
{
    int ch;

    printf("\n\n***************Which Operation You Want To Perform************");

    printf("\n1.Add record in File.");
    printf("\n2.Display All records.");
    printf("\n3.Search record in File.");
    printf("\n4.Update record in File.");
    printf("\n5.Perform All Arithmetic Operation");
    printf("\n6.find out Simple Interest.");
    printf("\n7.find out Area of Circle.");
    printf("\n8.find out Area of Rectangle.");
    printf("\n9.Square and Cube of a number.");
    printf("\n10.convert temperature Fahrenheit to Celsius.");
    printf("\n11.find out number is even or odd.");
    printf("\n12.multiplication table of inputted number.");
    printf("\n13.Fibonacci Series.");
    printf("\n14.Power value.");
    printf("\n15.find out sum of digits.");
    printf("\n16.find out reverse of that number.");
    printf("\n17.find out number is palindrome or not.");
    printf("\n18.find out number is Armstrong or not.");
    printf("\n19.find out number is Prime or not.");
    printf("\n20.find out factorial.");
    printf("\n21.add two matrices.");
    printf("\n22.subtract two matrices.");
    printf("\n23.multiply two matrices.");
    printf("\n24.find out length of string.");
    printf("\n25.Exit.");

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
        case 4:
            break;
        case 5:
            all_arithmetic_operation();
            break;
        case 6:
            interest_1();
            main();
        case 7:
            area_of_circle_0();
            main();
        case 8:
            area_of_rectangle_0();
            main();
        case 9:
            square_and_cube_0();
            main();
        case 10:
            fahrenheit_to_celsius_0();
            main();
        case 11:
            even_and_odd();
            main();
        case 12:
            mul_table();
            main();
        case 13:
            fibonacci_0();
            main();
        case 14:
            power_value_0();
            main();
        case 15:
            sum_of_digit_0();
            main();
        case 16:
            revers_num_0();
            main();
        case 17:
            palindrome_0();
            main();
        case 18:
            armstrong_0();
            main();
        case 19:
            prime_num_0();
            main();
        case 20:
            factorial_0();
            main();
        case 21:
            add_two_matrix_0();
            main();
        case 22:
            sub_two_matrix_0();
            main();
        case 23:
            mul_two_matrix_0();
            main();
        case 24:
            string_length();
            main();
        case 25:
            exit(1);
        default:
            printf("\nInvalid Input try again");
            main();
    }
    return 0;
}
