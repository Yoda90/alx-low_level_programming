#include "main.h"
#include <string.h>
/**
 *puts_half - print half of a string.
 *@str : holds the reverse of a string.
 *
 *Return:
 */
void puts_half(char *str)

{ int length = strlen(str);
	int c;
	int j;
	int middle = length / 2;

	if (length % 2 == 0)
	{
		for (j = middle; j < length; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		c = (length - 1) / 2;
		for (j = c + 1; j < length; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
