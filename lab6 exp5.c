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
     if(str[j]!=str[i])
      {
       printf("not palindrome");
       return 0;
      }
    }
     printf("palindrome");
    return 0;
}