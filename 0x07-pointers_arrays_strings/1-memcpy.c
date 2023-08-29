#include <stdio.h>
#include <string.h>

/**
 *_memcpy - a function that copies memory area.
 *@dest: is a pointer destination
 *@src: is a pointer to a  source data.
 *@n: number of bytes.
 *Return:  a pointer to destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
