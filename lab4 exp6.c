#include <stdio.h>
int main()
{
float power; 
float result; 
printf("enter the power\n");
scanf("%f",&power);
result = exp(power);
printf("The Exponential of %f is %f\n", power, result);
 return 0;
}