#include<stdio.h>

int main()
{ char str[100];
 int i=0,flag=0;
 printf("Enter statement.\n");
 gets(str);
   while(str[i++]!='\0');
   i--;
   printf("\n%d letters found.\n",i);
   i--;
   for(int j=0;j<i;j++,i--)
    {
     flag=str[j];
     str[j]=str[i];
     str[i]=flag;   
    }
    printf("%s",str);
    return 0;
}