#include<stdio.h>
int main ()
{
int n,min,temp;
printf("Enter the number of element: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements of an array: ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
min=i;
for(int j=i+1;j<n;j++)
{
if(a[min]>a[j])
{
min = j;
}
}
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
printf("The array is : ");
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}