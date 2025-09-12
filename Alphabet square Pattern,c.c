#include <stdio.h>

int main()
{
    char ch;
    int i,j;
    printf("Enter The Alphabet: ");
    scanf("%c",&ch);
    // Alphabet Square Pattern
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }

    return 0;
}
