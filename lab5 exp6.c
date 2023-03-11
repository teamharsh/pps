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
for(int j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("The array is : ");
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
