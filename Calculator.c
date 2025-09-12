//calculator
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    char op;

    printf("ENTER NUM 1 :");
    scanf("%d",&num1);

    printf("ENTER NUM 2 :");
    scanf("%d",&num2);

    printf("ENTER OPERATOR :");
    scanf("\n%c",&op);

    if(op=='+')
    {
        printf("SUM : %d", num1+num2);
    }

    else if(op=='-')
    {
        printf("DIFF : %d", num1-num2);
    }

    else if(op=='*')
    {
        printf("PRODUCT : %d", num1*num2);
    }

    else if(op=='/')
    {
        printf("QUOTIENT : %d", num1/num2);
    }
    else
    {
        printf("INVALID OPERATOR!!");
    }


    return 0;

}
