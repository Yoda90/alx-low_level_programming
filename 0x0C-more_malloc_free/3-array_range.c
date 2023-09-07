#include <stdlib.h>
#include "main.h"
/**
  *array_range - creates an array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *
  *Return: a
  */
int *array_range(int min, int max)
{
	int range, j;
	int *a;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	a = malloc(range * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (j = 0; j < range; j++)
	{
		*(a + j) = min + j;
	}

	return (a);
}
