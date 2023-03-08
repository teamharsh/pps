#include<stdio.h>
int main()
{
 int a,b,sum=0;
 printf("Enter five digit no.\n");
 scanf("%d",&a);
  
 b=a%10;
 a/=10;
 sum+=b;

 b=a%10;
 a/=10;
 sum+=b;

 b=a%10;
 a/=10;
 sum+=b;

 b=a%10;
 a/=10;
 sum+=b;

 b=a%10;
 a/=10;
 sum+=b;

 printf("\nSum=%d",sum);
 return 0;
}