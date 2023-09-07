#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 *_strlen - calculate length of a string.
 *@s : holds length of a string.
 *
 *Return: length
 */
unsigned int _strlen(char *s)
{

	unsigned int length = 0;

	for (length = 0; s[length] != '\0';)
		length++;

	return (length);
}
/**
 *string_nconcat - function that concatenates two strings.
 *@s1: its a string
 *@s2: its a string
 *@n: is positive integers
 *Return: s3
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{		char *s3;

		unsigned int i = 0, j = 0;

		unsigned int len1 = n;

		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
		len1 = len1 + _strlen(s1);

		s3 = malloc(sizeof(char) * (len1  + 1));
		if (s3 == NULL)
			return (NULL);


		for (i = 0; s1[i]; i++)
		{
			s3[j++] = s1[i];

		}
		for (i = 0; s2[i] && i < n; i++)
		{
			s3[j++] = s2[i];


		}
		s3[j] = '\0';
		return (s3);

}
