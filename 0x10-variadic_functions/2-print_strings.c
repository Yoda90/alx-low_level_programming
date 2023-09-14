#include "variadic_functions.h"

/**
 * print_strings - prints a string
 * @separator: is a string that seperates numbers
 * @n: an integer
 *
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list _strings;
	unsigned int i;
	const char *j;

	va_start(_strings, n);

		for (i = 0; i < n; i++)
	{
		j = va_arg(_strings, char *);
	if (j == NULL)

		printf("(nil)");

	else

		printf("%s", j);

	if (separator != NULL && i != (n - 1))

		printf("%s", separator);
	}

	 printf("\n");

	va_end(_strings);
}
