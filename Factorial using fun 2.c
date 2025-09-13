# include<stdio.h>
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
        return n*show(n-1);

          }
    return 0;
}
int main()
{
   int n;

    printf("Enter the Number: ");
    scanf("%d",&n);
    int t= show(n);
    printf("\nThe factorial is : %d\n\n",t);
    return 0;
}
