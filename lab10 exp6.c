#include<stdio.h>
#include<stdlib.h>
 struct STUDENT
 {
   float pps;
   float che;
   float maths;
   float eng;
   float wmp;
 };
  int main()
  {
    struct STUDENT *stud;
    int i,n;

    printf("Enter the no. of student = ");
    scanf("%d",&n);

    stud= (struct STUDENT *)malloc(n*sizeof(struct STUDENT));

    for( i=0 ; i<n ; i++)
    {
        printf("\nStudent %d.",i+1);

        printf("\nEnter P.P.S Marks = ");
        scanf("%f",&(stud+i)->pps);
        printf("Enter CHEMISTRY Marks = ");
        scanf("%f",&(stud+i)->che);
        printf("Enter MATHS Marks = ");
        scanf("%f",&(stud+i)->maths);
        printf("Enter ENGLISH Marks = ");
        scanf("%f",&(stud+i)->eng);
        printf("Enter W.M.P Marks = ");
        scanf("%f",&(stud+i)->wmp);
    }

    for( i=0 ; i<n ; i++)
    {
        printf("\n\nStudent %d.",i+1);
        printf("\nTotal Marks = %f",((stud+i)->pps + (stud+i)->che + (stud+i)->maths + (stud+i)->eng + (stud+i)->wmp ));
        printf("\n Percentage = %.2f%%",((stud+i)->pps + (stud+i)->che + (stud+i)->maths + (stud+i)->eng + (stud+i)->wmp )/5);
    }

  free(stud);

  return 0;
  }

