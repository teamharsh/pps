#include<stdio.h>
int main()
{
 int a,b,rev=0;
 printf("Enter five digit no.\n");
 scanf("%d",&a);
  
 b=a%10;
 a/=10;
 rev+=b*10000;

 b=a%10;
 a/=10;
 rev+=b*1000;

 b=a%10;
 a/=10;
 rev+=b*100;

 b=a%10;
 a/=10;
 rev+=b*10;

 b=a%10;
 a/=10;
 rev+=b*1;

 printf("\nReverse=%d",rev);
 return 0;
}