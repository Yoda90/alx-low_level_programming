#include <stdio.h>
#include <string.h>

/**
 *_strpbrk - a function that searches a string for any of a set of bytes.
 *@s: is a string
 *@accept: is string containing characters to me matched from s.
 *
 *Return: a pointer to the character in s that matches a character in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
