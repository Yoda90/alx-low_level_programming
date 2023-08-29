#include <stdio.h>
#include <string.h>

/**
 *set_string - a function that sets the value of a pointer to a char.
 *@s: pointer pointing to a pointer
 *@to: is a pointer
 *
 *Return:
 */
void set_string(char **s, char *to)

{
	*s = to;
}
