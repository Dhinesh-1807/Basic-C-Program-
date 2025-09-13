 #include <stdio.h>
 void byvalue(int a,int b)
 {
     int temp;
     temp=a;
     a=b;
     b=temp;
 }
 void byreference(int *a,int *b)
 {
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
 }
 int main()
 {
     int x,y;
     scanf("%d %d",&x,&y);
     byvalue(x,y);
     printf("After swapping by value: a=%d and b=%d\n",x,y);
     byreference(&x,&y);
     printf("After swapping by reference: a=%d and b=%d",x,y);

     return 0;
 }

