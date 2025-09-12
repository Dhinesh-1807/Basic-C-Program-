#include <stdio.h>
int main()
 {
    int a, b;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&a);

    while(b!= 0)
        {
        int c= a & b;
        a=a^b;
        b=c<<1;
    }
    printf("Sum: %d\n",a);
    return 0;
