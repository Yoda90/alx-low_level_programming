#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - a function that free dogs
 * @d: a pointer pointing to struct dog.
 */
void free_dog(struct dog *d)
{

	if (d == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
