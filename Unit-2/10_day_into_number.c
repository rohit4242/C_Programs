#include <stdio.h>
int main() {
    
    int day;
   
    
    printf("\nEnter Your Day In Number: ");
    scanf("%d", &day);

    if ((day<=7) && (day>=1)) {
        if(day==1)
        {
            printf("Monday");
        }
        else if(day==2)
        {
            printf("Tuesday");
        }
        else if(day==3)
        {
            printf("Wednesday");
        }
        else if(day==4)
        {
            printf("Thursday");
        }
        else if(day==5)
        {
            printf("Friday");
        }
        else if(day==6)
        {
            printf("Saturday");
        }
        else
        {
            printf("Sunday");
        }
    }
    else{
        printf("\nPlease Enter Only One Week(1-7) Numbers");
    }

    return 0;
}