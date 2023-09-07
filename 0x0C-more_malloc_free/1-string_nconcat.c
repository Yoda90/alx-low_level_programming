#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>
/**
 *string_nconcat - function that concatenates two strings.
 *@s1: its a string
 *@s2: its a string
 *@n: is positive integers
 *Return: (s3 - (len1 + yoda))
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{		char *s3;
		unsigned int yoda = n;

		int len1 = strlen(s1);

		if (s1 == NULL && s2 == NULL)
			return (NULL);
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";

		s3 = malloc(sizeof(char) * (len1 + n + 1));
		if (s3 == NULL)
			return (NULL);


		while (*s1)
		{
			*s3 = *s1;
			s3++;
			s1++;
		}
		while (*s2 && n > 0)
		{
			*s3 = *s2;
			s3++;
			s2++;
			n--;

		}
		*s3 = '\0';
		return (s3 - (len1 + yoda));

}
