#include <stdio.h>
#include <string.h>

/**
 *_strspn - a function that gets the length of a prefix substring.
 *@s: is a string
 *@accept: is string containing characters to me matched in s.
 *
 *Return: the number of characters in the initial segment s.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
