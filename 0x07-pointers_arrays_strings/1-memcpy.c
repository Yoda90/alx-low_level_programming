#include <stdio.h>
#include <string.h>

/**
 *_memset - a function that fills memory with a constant byte.
 *@dest: is a pointer destination
 *@src: is a pointer to a  source data.
 *@n: number of bytes.
 *Return: Returns: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
