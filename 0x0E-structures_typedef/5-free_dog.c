#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - free dogs
 * @d: struct dog to free
 */
void free_dog(struct dog *d)
{

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		free(d);

	}
}
