#include<stdio.h>
int main()
{
     int row, column;
    printf("Enter row: ");
    scanf("%d",&row);
    printf("Enter Column: ");
    scanf("%d",&column);
    int a[row][column],b[row][column];
    printf("Enter Matrix A:\n");
    for (int i=0;i<row;i++)
    {
        for (int j= 0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int i,j,k,c[i][j];
    printf("Enter Matrix B:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            c[i][j]=0;

            for(k=0;k<2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
                printf("%d\t",c);
            }
            printf("\n");
    }


    }
}


