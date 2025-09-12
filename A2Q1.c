#include<stdio.h>
int main()
{
   printf("*******Problem 1*******\n\n");
   int a=4,b=3,c=2,d=6,e=5;
   printf("To Evaluate 4>3>2");
   printf("\nAnswer is %d",a>b>c);

   printf("\n\n*******Problem 2*******\n\n");
   printf("To Evaluate 2+3>4+5");
   printf("\nAnswer is %d",c+b>a+d);

   printf("\n\n*******Problem 3*******\n\n");
   printf("To Evaluate 6>3+2<5");
   printf("\nAnswer is %d",d>b+c<e);
   return 0;

}
