#include<stdio.h>

int main()
{ 
   int n,x,count=0;
   printf("Enter the size of array.  ");
   scanf("%d",&n);
   int a[n];

   for(int i=0;i<n;i++)
   {
    printf("Enter at %d index = ",i);
    scanf("%d",&a[i]); 
   }

   printf("Enter the element to find in this array = ");
   scanf("%d",&x);
  
   for(int i=0;i<n;i++)
   {
    if(x==a[i])
    count++;
   }

   printf("No. %d appeared %d times in this array",x,count);
 return 0;
}