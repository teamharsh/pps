#include<stdio.h>

int main()
{ 
   int n,sum;
   printf("Enter the size of array.  ");
   scanf("%d",&n);
   int a[n];

   for(int i=0;i<n;i++)
   {
    printf("Enter at %d index = ",i);
    scanf("%d",&a[i]);
    sum+=a[i];
   }

   printf("Sum of entered arrays is %d",sum);
 return 0;
}