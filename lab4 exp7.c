#include<stdio.h>

int main()
{int num,sum=0,rem;
printf("Enter any integer to check Palindrome Number = ");
scanf("%d",&num);
int new_num=num;
while(num!=0)
{ rem=num%10;
  num/=10;
  sum=sum*10+rem;
}
if(sum==new_num)
printf("Yes %d is Palindrome Number",new_num);
else
printf("No %d is Not Palindrome Number",new_num);
    return 0;
}