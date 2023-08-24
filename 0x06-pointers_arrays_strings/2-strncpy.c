#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*_strncpy - function that copies a strings.
*@dest: is a strings.
*@src: is a string
*@n: is an integer.
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
