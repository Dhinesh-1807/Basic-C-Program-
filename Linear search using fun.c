#include<stdio.h>
int linear(int arr[],int size,int target)
{
 for(int i=0;i<size;i++)
    {
 if(arr[i]==target){
 return i;
 }
 }
 return -1;
}

int main()
{
 int n,target;
 printf("Enter size of number: ");
 scanf("%d",&n);
 printf("Enter %d Numbers: ",n);
 int arr[n];
 for(int i=0;i<n;i++)
    {
 scanf("%d",&arr[i]);
 }
 printf("Target Number: ");
 scanf("%d",&target);
 int result = linear(arr,n,target);
 printf("The element found at the index %d\n",result);
 return 0;
}
