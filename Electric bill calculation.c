#include<stdio.h>
int main()
{
    char name[50];
    float unit;
    float a=0;

    printf("Enter the Name of the Customer:");
    gets(name);
    printf("Enter the unit:");
    scanf("%f",&unit);

    if(unit>=199)
    {
        a=unit*1.20;
        printf("The bill amount is:%.2f",a);
    }
    else if((unit>=200)&&(unit<=400))
    {
        a=unit*1.50;
        printf("The bill amount is: %.2f",a);
    }
    else if((unit>=400)&&(unit<=600))
    {
        a=unit*1.80;
        printf("The bill amount is: %.2f",a);
    }
    else if(unit>=600)
    {

        a=unit*2.00;
        printf("The bill amount is: %.2f",a);
    }
    if(a>400)
    {
        float b=a*0.15;
        printf("\nThe Surcharge amount is: %.2f",b);
    }
    return 0;
}
