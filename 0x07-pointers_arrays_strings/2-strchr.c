#include <stdio.h>
#include <string.h>

/**
 *_strchr - a function that locates a character in a string.
 *@s: is a string
 *@c: is a variable.
 *
 *Return: Returns a pointer to the first occurrence of the character.
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
