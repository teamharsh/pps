#include<stdio.h>

int main()
{ char str[100];
 int i=0,count=0;
 printf("Enter statement.\n");
 gets(str);
   while(str[i++]!='\0');
   i--;
   printf("\n%d letters found.\n",i);
    
   for(int j=0;j<i;j++)
    if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u' || str[j]=='A' || str[j]=='E' || str[j]=='I' || str[j]=='O' || str[j]=='U')
    count++;
    printf("%d",count);
    return 0;
}