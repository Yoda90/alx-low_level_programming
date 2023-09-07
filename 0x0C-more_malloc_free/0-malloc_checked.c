#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked -  function that allocates memory
 *@b: integer value
 *Return: allo
 */
void *malloc_checked(unsigned int b)
{
	void *allo;

	allo = malloc(b);

	if (allo == NULL)
	{
		exit(98);
	}

	return (allo);
}
