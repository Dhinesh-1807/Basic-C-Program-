#include <stdio.h>

int main() {
    int totalseats,bookedseats;
    float adultFare,childfare;
    int numadults,numchildren;
    float totalAmount;


    printf("Enter total number of seats in the train: ");
    scanf("%d", &totalseats);


    printf("Enter number of seats booked: ");
    scanf("%d", &bookedseats);


    if (bookedseats>totalseats)
        {
        printf("Error: Number of seats booked cannot exceed total seats.\n");
        }



    printf("Enter fare for adults: ");
    scanf("%f",&adultfare);
    printf("Enter fare for children: ");
    scanf("%f",&childfare);


    printf("Enter number of adults: ");
    scanf("%d",&numadults);
    printf("Enter number of children: ");
    scanf("%d",&numchildren);


    if(numadults+numchildren>bookedseats)
        {
        printf("Error: The total number of adults and children booked cannot exceed booked seats.\n");

        }

    totalamount=(numadults*adultfare)+(numchildren*childfare);


    printf("The total amount for booking is: %.2f\n",totalamount);
}
