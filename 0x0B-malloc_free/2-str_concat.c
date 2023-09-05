#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenate string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, n, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);

	for (n = 0, m = 0; n < (i + j + 1); n++)
	{
		if (n < i)
			a[n] = s1[n];
		else
			a[n] = s2[m++];
	}

	return (a);
}
