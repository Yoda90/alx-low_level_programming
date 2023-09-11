#include <stdlib.h>
#include "dog.h"

/**
 *print_dog - prints struct dog
 * @d: is a pointer to struct dog
 * Return nothiing
 */

dog_t{
	char * name;
	float age;
	char *owner;
}

dog_t *new_dog(char *name, float age, char *owner)
{	
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);

	new_dog = malloc (sizeof(dog_t));

	if (new_dog == NULL)
		
		return (NULL);
  /*Allocating memory to  copy name and owner*/

  new_dog->name = malloc(len + 1);
  new_dog->owner = malloc(len2 + 1);

  if (new_dog->name == NULL || new_dog->owner == NULL)
  {
	  free(new_dog);
	  free(new_dog->name);
	  free(new_dog->owner);

	  return (NULL);
  }
	  strcpy(new_dog->name, name);
	   strcpy(new_dog->owner, owner);
	   new_dog->age = age;

	return (new_dog);
}
