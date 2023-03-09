//sum of matrix
#include<stdio.h>

int main()
{ 
 int a[3][3] , b[3][3] , sum[3][3];
  
  printf("\nEnter the elements in 1st array \n\n");
  for(int i=0;i<3;i++)
  {
   for(int j=0;j<3;j++)
   { 
     printf("Enter at col %d and row %d = ",i+1,j+1);
     scanf("%d",&a[i][j]);
   }
  }
  
  printf("\nEnter the elements in 2nd array\n\n");
  for(int i=0;i<3;i++)
  {
   for(int j=0;j<3;j++)
   { 
     printf("Enter at col %d and row %d = ",i+1,j+1);
     scanf("%d",&b[i][j]);
   }
  }

  for(int i=0;i<3;i++)
  { 
   printf("\n");
   for(int j=0;j<3;j++)
   { 
    sum[i][j]=a[i][j]+b[i][j];
    printf("%5d ",sum[i][j]);
   }
  }

 return 0;
}

    