#include<stdio.h>
#include<stdlib.h>

int txt (long);

int main()
{
long int num, t;

printf("Enter Number:");
scanf("%ld", &num);

if (num==0)
 printf("Zero");

if (num>=10000000)
{
 t = num/10000000;
 if (t<=20)
 txt (t);

else
 {
  txt (t/10*10);
  txt (t%10);
 }
  txt (10000000);
}
num = num%10000000;

if (num>=100000)
{
 t = num/100000;
 if (t<=20)
 txt (t);

else
 {
  txt (t/10*10);
  txt (t%10);
 }
  txt (100000);
}
num = num%100000;

if (num>=1000)
{
 t = num/1000;
 if (t<=20)
 txt (t);

else
 {
  txt (t/10*10);
  txt (t%10);
 }
  txt (1000);
}
num = num%1000;  

if (num>=100)

 {
  txt (num/100);
  txt (100);
 }
num = num%100;
if(num<=20)
txt(num);
else
{
txt(num/10*10);
txt(num%10);
}
}

int txt(long num)
{
        switch(num)
        {
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
            case 10: 
                printf("Ten ");
                break;
            case 11: 
                printf("Eleven ");
                break;
            case 12: 
                printf("Twelve ");
                break;
            case 13: 
                printf("Thirteen ");
                break;
            case 14: 
                printf("Fourteen ");
                break;
            case 15: 
                printf("Fifteen ");
                break;
            case 16: 
                printf("Sixteen ");
                break;
            case 17: 
                printf("Seventeen ");
                break;
            case 18: 
                printf("Eighteen ");
                break;
            case 19: 
                printf("Nineteen ");
                break;
            case 20: 
                printf("Twenty ");
                break;
            case 30: 
                printf("Thirty ");
                break;
            case 40: 
                printf("Fourty ");
                break;
            case 50: 
                printf("Fifty ");
                break;
            case 60: 
                printf("Sixty ");
                break;
            case 70: 
                printf("Seventy ");
                break;
            case 80: 
                printf("Eighty ");
                break;
            case 90: 
                printf("Ninty ");
                break;
            case 100: 
                printf("Hundred ");
                break;
            case 1000: 
                printf("Thousand ");
                break;
            case 100000: 
                printf("Lakhs ");
                break;
            case 10000000: 
                printf("Crores ");
                break;
        }
        }
