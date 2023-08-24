#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*string_toupper - function that changes lowercase to uppercase.
*@str: holds string of arrays characters
*
*Return: str
*/
char *string_toupper(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)

	{
		if (str[i] >= 'a' && str[i] <= 'z')

		{
			str[i] = str[i] - ('a' - 'A');


		}


	}
	return (str);

}
