#include<stdio.h>

int main()
{ 
   int n,x;
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
   
   int start=0;
   int end=n-1;
   
   while(start<=end)
   {
    int mid=(start+end)/2;
    if(a[mid]==x)
     {
      printf("%d is found at index %d",x,mid);
      return 0; 
     }
    else if(x<a[mid])
     end=mid-1;
    else (x>a[mid]);
     start=mid+1;
   }

   printf("not");
 return 0;
}