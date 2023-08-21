#include "main.h"
#include <string.h>
/**
 *puts_half - print half of a string.
 *@str : holds the reverse of a string.
 *
 *Return:
 */
void puts_half(char *str)
{
	int length = strlen(str);

	int i;
	int middle = length / 2;

	for (i = middle; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
