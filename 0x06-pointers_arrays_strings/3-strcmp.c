#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*_strcmp - function that compares two strings.
*@s1: is a strings.
*@s2: is a string
*Return:-1 if s1 < s2, 0 if s1 = s2, 1 if s2 > s1.
*/
int _strcmp(char *s1, char *s2)

{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)

	{
		return (*s1 - *s2);
	}

	s1++;
	s2++;
	}
		return (0);
}

