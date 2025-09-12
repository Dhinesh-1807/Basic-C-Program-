#include<stdio.h>
int sum(int a,int b)
{
    // Adding Two Number using Function

    printf("Enter Number A: ");
    scanf("%d",&a);
    printf("Enter Number B: ");
    scanf("%d",&b);
    return a+b;
}

int main()
{
    int x,y,c;
   c=sum(x,y);
   printf("%d",c);
}


