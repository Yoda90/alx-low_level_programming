#include "variadic_functions.h"

/**
 * sum_them_all - a function that return all sum numbers
 * @n: is an integer
 *
 * Return: sum_all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	unsigned int count = 0;
	int sum_all = 0;

	if (n == 0)
		return (0);

	va_start(numb, n);

	for (; count < n; count++)
		sum_all += va_arg(numb, int);
	va_end(numb);

	return (sum_all);
}
