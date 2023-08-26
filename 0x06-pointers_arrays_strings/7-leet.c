#include <string.h>
#include <stdio.h>

/**
 * leet - convert a string to leet speak
 * Replaces specific characters with their leet equivalents.
 *
 * @text: The string to be converted
 * Return: text.
 *
 */
char *leet(char *text)
{
	char leetChars[] = {'4', '3', '0', '7', '1'};
	char CharsUppercase[] = {'A', 'E', 'O', 'T', 'L'};
	char CharsLowercase[] = {'a', 'e', 'o', 't', 'l'};
	size_t i, j;

	for (i = 0; i < strlen(text); i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (text[i] == CharsUppercase[j] || text[i] == CharsLowercase[j])
			{
				text[i] = leetChars[j];
				break;
			}
		}
	}

	return (text);
}
