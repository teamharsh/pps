#include <stdio.h>
int power(int x, int n);
int main()
{
int x,n;
printf("Enter Base = ");
scanf("%d",&x);
printf("Enter Power = ");
scanf("%d",&n);
printf("%d\n", power(x, n));
}

int power(int x, int n)
{
if (n == 0)
return 1;
else if (x == 0)
return 0;
else
return x * power(x, n - 1);
}