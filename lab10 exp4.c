#include<stdio.h>
#include<string.h>
int main()
{
 int size;

  printf("Enter the size of array = ");
  scanf("%d",&size);

 int arr[size] , *aptr[size];

 for(int i=0 ; i < size ; i++)
 {
  printf("Enter the array at index %d = ",i+1);
  scanf("%d",&arr[i]);
 }

 for(int i=0 ; i < size ; i++)
 {
  aptr[i] = &arr[i];
 }

 for(int i=0 ; i < size ; i++)
 {
  printf("%d\n", *aptr[i]);
 }

 return 0;
}
   
    