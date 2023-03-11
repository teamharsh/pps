#include<stdio.h>
int main ()
{
int n,min,temp,i,j;
printf("Enter the number of element: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements of an array: ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
temp=a[i];
for(j=i;j>0&&temp<a[j-1];j--)
{
a[j]=a[j-1];
}
a[j]=temp;
}
printf("The array is : ");
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}