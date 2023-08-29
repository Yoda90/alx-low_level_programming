#include <stdio.h>
#include <string.h>

/**
 *_strspn - a function that gets the length of a prefix substring.
 *@s: is a string
 *@ccept: is string containing characters to me matched.
 *
 *Return: Returns a pointer to the memory area s
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
