#include<stdio.h>
int main()
{
    int a,rev=0,rem=0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;

    }
    printf("The reverse of the number is:%d",rev);








}
