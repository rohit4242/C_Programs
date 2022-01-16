/* 1. Write a program to Add Two Complex Numbers by Passing Structure to a
Function. */

#include <stdio.h>

typedef struct number {

    int x,y;
}num;

void add_num(num n)
{
    printf("\nYour Sum is: %d",n.x+n.y);
}

int main()
{

    num n1={5,6};

    add_num(n1);

    return 0;

}