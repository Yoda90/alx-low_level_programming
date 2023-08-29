#include <stdio.h>
#include <string.h>

/**
 *_memset - a function that fills memory with a constant byte.
 *@s: is a string
 *@b: is a variable.
 *@n: unsigned int.
 *Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
