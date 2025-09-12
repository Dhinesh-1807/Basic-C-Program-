#include<stdio.h>
int div();
int main()
{
    // Division of Two Number using Function

    div();
    div();
    div();
    div();
}
int div()
{
    int a,b;
    printf("Enter Number A: ");
    scanf("%d",&a);
    printf("Enter Number B: ");
    scanf("%d",&b);
    int c=a/b;
    printf("\n\t\t\t The Answer is %d \n\n",c);
}

