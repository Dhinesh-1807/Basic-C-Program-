#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter A:");
    scanf("%d",&a);
    printf("Enter B:");
    scanf("%d",&b);
    if(a==b)
    {
        printf("***Two Numbers are Equal***");
    }
    else
    {
      printf("***Two Numbers are Not Equal***");
    }
    return 0;
}
