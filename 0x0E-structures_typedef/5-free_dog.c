#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - free memory allocated for struct dogs
 * @d:  struct dog to free.
 */
void free_dog(struct dog *d)
{

	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
