#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*_strncat - function that concatenates two strings.
*@dest: is a strings.
*@src: is a string
*Return: dest
*@n: holds bytes
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);

}
