#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
*is_separator - specify if t string is  as a separator.
*@s: is a strings.
*
*Return: 0, 1
*/
char is_separator(char s)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int j;

	for (j = 0; separators[j] != '\0'; ++j)
	{
		if (s == separators[j])
		{
			return (1);
		}
	}
	return (0);
}
/**
*cap_string - capitalizes all words of a string
*@ptr: holds the string
*is_separator -specified if string is a seperator.
*Return: ptr
*/
char *cap_string(char *ptr)
{
	size_t j;

	for (j = 0; j < strlen(ptr); j++)
	{
		if (is_separator(ptr[j - 1]) || j == 0)
		{
			if (islower(ptr[j]))
			{
				ptr[j] = toupper(ptr[j]);
			}
		}

	}

	return (ptr);
}
