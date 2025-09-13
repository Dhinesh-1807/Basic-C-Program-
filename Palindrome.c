#include<stdio.h>
int main()
{
    // Palindrome
   int n,copy,rev=0;
   printf("Enter a Number: ");
   scanf("%d",&n);
   copy=n;
   while(copy>0)
   {
       rev=rev*10;
       rev=rev+(copy%10);
       copy/=10;
   }
   if(n==rev)
   {
       printf("It is Palindrome");
   }
   else
   {
       printf("Not a Palindrome");
   }

}
