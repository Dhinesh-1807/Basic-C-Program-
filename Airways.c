#include<stdio.h>
int main()
{
    int totalseats,bookedseats,ecnum,bnum;
    float economyfare,businessfare,totalfare;

    printf("*******APPLICATION 8: AIRWAYS*******\n\n");
    printf("Enter Total Numer of seats in Airways: ");
    scanf("%d",&totalseats);



    printf("Nuber of seats Booked: ");
    scanf("%d",&bookedseats);




    if(bookedseats>totalseats)
    {
        printf("Cannot be exist :**You booked more than Total Seats**");
    }



    printf("Enter fare for Economy class: ");
    scanf("%f",&economyfare);



    printf("Enter fare for Business Class: ");
    scanf("%f",&businessfare);



    printf("How many Number of Economy Class: ");
    scanf("%d",&ecnum);



    printf("How many Number of Business Class:");
    scanf("%d",&bnum);



    if(ecnum+bnum>bookedseats)
    {
       printf("Cannot be exist: **You Economy class and Business class more than booked");
    }



    totalfare=(economyfare*ecnum)+(businessfare*bnum);


    printf("The total Fare is: %f",totalfare);
    return 0;
}

