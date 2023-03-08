#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter principal.\n");
 scanf("%d",&a);
 printf("Enter rate.\n");
 scanf("%d",&b);
 printf("Enter time.\n");
 scanf("%d",&c);
 printf("\nS.I=%d",(a*b*c)/100);
 return 0;
}