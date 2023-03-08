#include<stdio.h>

int main()
{
   int num=1;
   for(int i=1;i<=10;i++)
   {printf("square of %d -> %d\n",num,num*num);
   printf("cube of %d -> %d\n\n",num,num*num*num);
   num++;}
    return 0;
}