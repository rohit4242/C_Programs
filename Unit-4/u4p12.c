/*12. Find out area of circle using pointer and function*/

#include <stdio.h>
#define PI 3.14159
void area_of_circle(int r, float *a,float *d, float *c)
{
    *a = PI*r*r;
    *d = 2*r;
    *c = 2*PI*r;
}

int main()
{
    int redius;
    float area,diameter,circumference;

    printf("\nEnter Your Redius: ");
    scanf("%d",&redius);

    area_of_circle(redius,&area, &diameter,&circumference);
    
    printf("\nYour Area of Circle is: %.2f",area);
    printf("\nYour Diameter is: %.2fcm",diameter);
    printf("\nYour Circumference is: %.2f",circumference);

    return 0;
}