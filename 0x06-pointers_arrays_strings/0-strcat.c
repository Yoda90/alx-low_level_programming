#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*_strcat - function that concatenates two strings.
*@dest: is a strings.
*@src: is a string
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
