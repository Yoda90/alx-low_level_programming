#include "main.h"
#include <string.h>
/**
 *print_rev - print string in reverse.
 *@s : holds the reverse of a string.
 *
 *Return:
 */
void print_rev(char *s)
{
	int i;

	int length  = strlen(s);

	for (i = length; i >= 0; --i)


		printf("%c", s[i]);
	{
		printf("\n");
	}
}

