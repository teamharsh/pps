#include <stdio.h>

int main()
{
    float sal;
    printf("Enter your salary : ");
    scanf("%f",&sal);
    if(sal>20000)
        printf("\nYour salary after tax : %.2f",sal*0.8);
    else if(sal<=20000 && sal>=0)
        printf("\nYour salary after tax : %.2f",sal*0.85);
    else
        printf("\nError");

    return 0;
}