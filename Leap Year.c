
#include<stdio.h>
int main()
{
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);
    if(year%400==0)
    {
        if(year%100==0)
        {
            printf("Its a Leap Year");
        }
        else
        {
            printf("Not a Leap Year");
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("Its a Leap Year");
        }
        else
        {
            printf("Not a Leap Year");
        }

    }
}
