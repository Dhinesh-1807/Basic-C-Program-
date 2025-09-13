#include<stdio.h>
void fibonacci()
{
    int n,c;
    printf("Number of time to be executed: ");
    scanf("%d",&n);

    int a=0,b=1;
    printf("%d\t%d",a,b);

    for(int i=2;i<n;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
}
void main()
{
    fibonacci();
}
