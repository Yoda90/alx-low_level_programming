#include "main.h"
/**
 * swap_int - swap two numbers.
 * @a: holds value of an  integer.
 *@b: value of an integer
 * Return
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;


}
