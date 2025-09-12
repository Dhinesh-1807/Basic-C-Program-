#include<stdio.h>
#include<stdio.h>
int main()
{
    int num,copy,digit=0,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    copy=num;
    while(copy!=0)
    {
        copy=copy/10;
        digit++;
    }
    copy =num;
    while(copy!=0)
    {
        sum=sum+pow((copy%10),digit);
        copy=copy/10;
    }
    if(sum==num)
    {
        printf("Armstrong Number");
    }
    else{
        printf("Not a Armstrong Number");
    }
    return 0;
}
