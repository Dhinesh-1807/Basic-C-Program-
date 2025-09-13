#include<stdio.h>
int main()
{
    int a;
    printf("Enter age:");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("Eligible for voting");
    }
    else
    {
        printf("Not eligible for voting");
    }
    return 0;
}
