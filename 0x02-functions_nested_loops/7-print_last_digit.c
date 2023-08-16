#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - function that prints the last digit of a number.
 *@i : holds integers
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	i = abs(i % 10);
	_putchar(i + '0');

	return (i);
}
