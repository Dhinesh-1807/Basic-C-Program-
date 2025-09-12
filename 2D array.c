#include <stdio.h>
int main()
 {
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (int i=1;i<=4;i++)
        {
        for (int j=1;j<=i;j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
