#include <stdio.h>

int main()
{
	int size;
    printf("Enter the size of an array = ");
	scanf("%d",&size);

    int array[size] , *pointer[size];

   for (int i = 0; i < size; i++)
    {
	  printf("Enter the array at index %d = ",i+1);
      scanf("%d",&array[i]);
    }

    for (int i = 0; i < size; i++)
    {
     pointer[i] = &array[i];
    }

	for (int i = 0; i < size; i++)
    {
		printf("Value of index %d = %d\t Address = %p\n", i + 1, *pointer[i], pointer[i]);
	}

	return 0;
}