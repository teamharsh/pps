#include <stdio.h>
int main()
{
  int a,b,c,d,e,max=0;
    printf("Enter five numbers.\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    
    if(a>max)
     max=a;
    if(b>max)
     max=b;
    if(c>max)
     max=c;
    if(d>max)
     max=d;
    if(e>max)
     max=e;
    printf("Max is %d.",max);
    return 0;
}
    