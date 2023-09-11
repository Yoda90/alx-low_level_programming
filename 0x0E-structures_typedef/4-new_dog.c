#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 *new_dog - creates a new dog
 * @name: name of a dog
 * @owner: owner of a dog
 * @age: age of a dog
 *
 * Return: pointer to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *dog;

	int len1;
	int len2;

	len1 = strlen(name);
	len2 = strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)

		return (NULL);
	/*Allocating memory to  copy name and owner*/

	dog->name = malloc(len1 + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(len2 + 1);

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);

		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
