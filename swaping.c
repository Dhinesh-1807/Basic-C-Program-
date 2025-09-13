#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}
