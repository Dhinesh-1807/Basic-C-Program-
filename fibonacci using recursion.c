#include<stdio.h>
int show(int n)
    {
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
        {
        return show(n-1)+show(n-2);

        }
}
int main()
{
    int num=6;
    for (int i= 0;i<num;i++)
    {
        printf("%d",show(i));
    }
    return 0;
}

