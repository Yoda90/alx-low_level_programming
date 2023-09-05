#include "main.h"
#include <stdlib.h>
/**
 *create_array - a function that creates an array
 *of chars, and initializes it with a specific char
 *@c: is a char character
 *@size: is an unsighned int
 *Return: 0, NULL.
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)


	{
		array[i] = c;
	}

	return (array);

}
