#include <stdio.h>
 int main()
 {
 int size;
 printf("Enter number of elements: ");
 scanf("%d",&size);
 int a[size];
 printf("Enter elements: ");
 for (int i=0;i<size;i++) {
 scanf("%d",&a[i]);
 }

 for (int i=0;i<size-1;i++)
    {
 for (int j=i+1;j<size;j++)
 {
 if (a[i]>a[j])
  {
 int temp=a[i];
 a[i]=a[j];
 a[j]=temp;
}
 }
 }
 printf("Array in Ascending Order: ");
 for (int i=0;i<size;i++)
    {
 printf("%d ",a[i]);
 }
 return 0;
 }
