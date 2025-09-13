#include<stdio.h>
int main()
{
    // Square Star Pattern
    int n,i,j;
    printf("Size of the Star: ");
    scanf("%d",&n);
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}
