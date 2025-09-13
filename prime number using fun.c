#include<stdio.h>
void num()
{
    int n,i,m=0,flag=0;
    printf("Enter the Number to check Prime number or not : ");
    scanf("%d",&n);
    m=n/2;
    for (i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("Number is Not Prime");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Number is Prime");
    }
}
void main()
{
    num();
}
