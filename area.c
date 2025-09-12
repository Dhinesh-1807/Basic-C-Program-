#include<stdio.h>
#define pi 3.14
int main()
{
  int r;
  float area;
  printf("Enter r:");
  scanf("%d",&r);
  area=2*pi*r*r;
  printf("Area is %.2f",area);
  return 0;
}
