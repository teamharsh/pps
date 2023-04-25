#include<stdio.h>

float avg(int[] , int);

int main()
{
 int size;

  printf("Enter the size of array = ");
  scanf("%d",&size);

 int arr[size];

 for(int i=0 ; i < size ; i++)
 {
  printf("Enter the array at index %d = ",i+1);
  scanf("%d",&arr[i]);
 }

 float (*fptr)(int[],int);
 fptr=avg;  // also write fptr = &avg;
 printf("%.2f", fptr(arr,size));   // also write (*fptr)(arr,size);

 return 0;
}
   
float avg(int farr[] , int fsize) 
{ 
 float sum=0;

 for(int i=0; i<fsize; i++)
 sum+=farr[i];

 return sum;
}