#include<stdio.h>
int main()
{
    int a;
    printf("Enter A:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("***The Given Number is Even***");

    }
    else
    {
        printf("***The Given Number is Odd***");
    }
    return 0;
}
