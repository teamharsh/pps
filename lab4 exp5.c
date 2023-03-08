#include <stdio.h>
int main()
{ int num,a,sum=0,b=1;
printf("enter the no. in decimal\n");
scanf("%d",&num);
while(num!=0)
{
a=num%2;
num=num/2;
sum=sum+a*b;
b=b*10;
}
printf("binary %d",sum);
 return 0;
}