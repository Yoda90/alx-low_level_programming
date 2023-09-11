#include <stdio.h>
#include "dog.h"

/**
 *print_dog - prints struct dog
 * @d: is a pointer to struct dog
 * Return nothiing
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->name = "(nil)";

	printf("name =  %s\n; age = %.1f\n; owner = %s\n", d->name, d->age, d->owner);
}
