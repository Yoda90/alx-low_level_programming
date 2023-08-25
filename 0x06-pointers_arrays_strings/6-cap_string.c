#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 *cap_string - function that capitalizes all words of a string.
 *@ptr: is a strings.
 *
 *Return: ptr
 */
char *cap_string(char *ptr)
{
	size_t i;

	for (i = 1; i < strlen(ptr); i++)
	{

		if (isspace(ptr[i - 1]) || ispunct(ptr[i - 1]) || isblank(ptr[i - 1]))
		{
			if (islower(ptr[i]))
			{
				ptr[i] = toupper(ptr[i]);
			}
		}

	}

	return (ptr);
}
