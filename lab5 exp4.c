#include<stdio.h>

int main()
{ 
   int n,x,pos,found=0;
   printf("Enter the size of array.  ");
   scanf("%d",&n);
   int a[n];

   for(int i=0;i<n;i++)
   {
    printf("Enter at %d index = ",i);
    scanf("%d",&a[i]); 
   }

   printf("\nEnter the element to search in array = ");
   scanf("%d",&x);
  
   for(int i=0;i<n;i++)
   {
    if(a[i]==x)
    {
     pos=i;
     found=1;
    }
   } 
   if(found==0)
   printf("%d is not in this array",x);
   else
   printf("%d is at index %d of the array ",x,pos);
 return 0;
}