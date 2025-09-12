#include<stdio.h>
int main()
{
    int div,dir,quo,rem;
    printf("Enter Dividend:");
    scanf("%d",&div);
    printf("Enter Divisor:");
    scanf("%d",&dir);
    quo=0;
    while(div>=dir)
    {
        div-=dir;
        quo++;
    }
    rem=div;
    printf("Quotient: %d",quo);
    printf("\nRemainder: %d",rem);
    return 0;
 }
