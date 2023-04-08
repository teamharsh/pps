#include<stdio.h>

 void read(int*, int*);
 void dis(int ,int);
 void swap(int* , int* );

int main()
{
 int a,b;
 read(&a,&b);
 printf("\nBefore");
 dis(a,b);
 swap(&a,&b);
 printf("After");
 dis(a,b);

 return 0;
}

void read(int*c, int*d)
{
 printf("Enter a = ");
 scanf("%d",c);
 printf("Enter b = ");
 scanf("%d",d);
}

void dis(int c, int d)
{
 printf("\nA = %d",c);
 printf("\nB = %d\n\n",d);
}

void swap(int*c , int*d)
{
 int temp;
 temp= *c;
 *c=*d;
 *d=temp;

}