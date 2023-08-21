#include "main.h"
#include <string.h>
/**
 *rev_string - print string in reverse.
 *@s : holds the reverse of a string.
 *
 *Return:
 */
void rev_string(char *s)

{
	int j, i;
	char t;

	for (j = 0, i = strlen(s) - 1; j < i; j++, i--)
	{
		t = s[j];
		s[j] = s[i];
		s[i] = t;
	}
}
