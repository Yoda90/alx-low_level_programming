#include "variadic_functions.h"

/**
 * print_numbers - functio that print numbers
 * @separator: The character that separates numbers
 * @n: is an integer
 *
 * Return:
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list _numbers;
	unsigned int i = 0;
		va_start(_numbers, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(_numbers, unsigned int));


		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(_numbers);
	printf("\n");
}
