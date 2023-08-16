#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 *
 * Return: retun 1, return -1 and return 0.
 * @n: intege that holds  a number.
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if  (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
