#include<stdio.h>

void circle(int);
void square(int);
void rectangle(int,int);
void traingle(int,int,int);

int main()
{ 
 int n,a,b,c;
 char ch;
 do
  {
   printf("Enter which area and perimeter you want to find.\n");
   printf("1 for circle.\n2 for square.\n3 for rectangle.\n4 for traingle.\n");
   scanf("%d",&n);
   switch(n)
   { 
    case 1: printf("Enter the radius = ");
            scanf("%d",&a);
            circle(a);
            break;
   
     case 2: printf("Enter the length = ");
            scanf("%d",&a);
            square(a);
            break;
    
    case 3: printf("Enter the Length = ");
            scanf("%d",&a);
            printf("Enter the breath = ");
            scanf("%d",&b);
            rectangle(a,b);
            break;
  
    case 4: printf("Enter the 1st side = ");
            scanf("%d",&a);
            printf("Enter the 2nd side = ");
            scanf("%d",&b);
            printf("Enter the 3rd side = ");
            scanf("%d",&c);
            traingle(a,b,c); 
            break;
    } 
    printf("\nEnter \"y\" to find again.\n");
    scanf(" %c",&ch);
  }while(ch=='y');
 return 0;
}

void circle(int a)
{
 int perimeter=2*3.14*a;
 int area=3.14*a*a;
 printf("\Circle");
 printf("\n Perimeter = %d\n Area      = %d\n", perimeter,area);
}

void square(int a)
{
 int perimeter=4*a;
 int area=a*a;
 printf("\nSquare");
 printf("\n Perimeter = %d\n Area      = %d\n", perimeter,area);
}

void rectangle(int a,int b)
{
 int perimeter=2*(a+b);
 int area=a*b;
 printf("\nRectangle");
 printf("\n Perimeter = %d\n Area      = %d\n", perimeter,area);
}

void traingle(int a,int b,int c)
{
 int perimeter=a+b+c;
 int s=perimeter/2;
 int area=pow((s-a)*(s-b)*(s-c),1/2);
 printf("\nTraingle");
 printf("\n Perimeter = %d\n Area      = %d\n", perimeter,area);
}