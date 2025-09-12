#include<stdio.h>
int main()
{
    printf("*******Problem 1*******\n\n");
    int a=2,b=3,c=5,d=8,e=25;
    printf("To Evaluate 5+3*5>=25%2<=8=5-3*2>=8+3!=5");
    printf("\n\nThe Answer is %d",c+b*b>=e%a<=d==c-b*a>=d+b!=c);
    return 0;
}
