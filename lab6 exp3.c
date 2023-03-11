#include<stdio.h>

int main()
{ char str[100];
 int i=0;
 printf("Enter statement.\n");
 gets(str);
   while(str[i++]!='\0');
   i--;
   printf("\n%d letters found.\n",i);
    
   for(int j=0;j<i;j++)
    printf(" \"%c\" ",str[j]);
    return 0;
}