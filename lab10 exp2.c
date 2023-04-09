#include<stdio.h>

 void read(int*, int*);
 void dis(int [] ,int);
 float avg(int* , int* );

int main()
{
 int arr[10] , size;
 float ans;
 read(arr,&size);

 dis(arr,size);
 ans=avg(arr,&size);

printf("\n\n AVERAGE = %.2f",ans);

 return 0;
}

void read(int* arr, int*size)
{
  printf("Enter the size of array = ");
  scanf("%d",size);

 for(int i=0 ; i< *size ; i++)
 {
     printf("Enter the array at index %d = ",i+1);
     scanf("%d",&arr[i]);
 }
}

void dis(int arr[], int size)
{
 for(int i=0 ; i<size ; i++)
 {
     printf("Array at index %d = %d\n",i+1,arr[i] );
 }
}

float avg(int* arr, int*size)
{
 float sum=0;
 for(int i=0 ; i<*size ; i++)
 sum += arr[i];
 return sum / *size;
}