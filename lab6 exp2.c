//Multiplication of matrix
#include<stdio.h>

int main()
{ 
 int a[3][3] , b[3][3] , mul[3][3];
  
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
    mul[i][j]=0;
    for(int k=0;k<3;k++)
    {
    mul[i][j]+=a[i][k]*b[k][j];
    }
    printf("%5d ",mul[i][j]);
   }
  }

 return 0;
}

    