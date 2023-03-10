#include<stdio.h>

void word(int);

int main()
{
  int n,rev=0,a;
   printf("Enter no to print in words.\n");
   scanf("%d",&n);
   while(n!=0)
    { 
     a=n%10;
     n/=10;
     rev=rev*10+a;
    }
   word(rev);
  return 0;
}

void word(int z)
{
 char v[10][6]={"zero ","one  ","two  ","three","four ","five ","six  ","seven","eight","nine "};
 int b=z%10;
 int c=z/10;
 printf(" %s  ",v[b]);
 if(c==0)
 return;
  
 word(c);

}