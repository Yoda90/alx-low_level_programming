#include "main.h"
#include <string.h>
/**
 * print_array -function that prints n elements of an array of integers.
 *@n : holds array of intergers.
 *@a : is a pointer of a variable which is a integer.
 *Return:
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
