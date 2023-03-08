#include<stdio.h>

int main()
{
   int prime,count=0,a;
   printf("Enter no. to check prime or not ->\n");
   scanf("%d",&prime);
   if(prime<=1)
   printf("not prime");
   else
 { for(int i=1;i<=prime;i++)
   {
   a=prime%i;
   if(a==0)
   count++;
   }
   if(count<=2)
   printf("%d is prime no.",prime);
   else 
   printf("%d is not prime no.",prime);
}
   return 0;
}
