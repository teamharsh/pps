#include<stdio.h>

int main()
{ 
   int n,x,y;
   printf("Enter the size of array.  ");
   scanf("%d",&n);
   int a[n];

   for(int i=0;i<n;i++)
   {
    printf("Enter at %d index = ",i);
    scanf("%d",&a[i]); 
   }

   printf("Array Old ");
   for(int i=0;i<n;i++)
   {
    printf("%d ",a[i]); 
   }

   printf("\nEnter the index to entered new element = ");
   scanf("%d",&x);
   printf("\nEnter the no. to be replaced on %d index = ",x);
   scanf("%d",&y);
  
   a[x]=y;
  
   printf("\n\nArray New ");
   for(int i=0;i<n;i++)
   {
    printf("%d ",a[i]); 
   } 
 return 0;
}