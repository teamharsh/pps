#include<stdio.h>
#include<stdlib.h>
 struct employee
 {
     char name[20];
     int id;
     float salary;
 };
  int main()
  {
    struct employee *emp;
    int i,n;

    printf("Enter the no. of employee = ");
    scanf("%d",&n);

    emp= (struct employee *)malloc(n*sizeof(struct employee));

    for( i=0 ; i<n ; i++)
    {
        printf("\nEmployee %d.",i+1);

        printf("\nEnter Name = ");
        scanf("%s",(emp+i)->name);
        printf("Enter ID = ");
        scanf("%d",&(emp+i)->id);
        printf("Enter Salary = Rs");
        scanf("%f",&(emp+i)->salary);
    }

    for( i=0 ; i<n ; i++)
    {
        printf("\n\nEmployee %d.",i+1);

        printf("\nName = %s",(emp+i)->name);
        printf("\nID = %d",(emp+i)->id);
        printf("\nSalary = Rs%f",(emp+i)->salary);
    }

  free(emp);

  return 0;
  }
