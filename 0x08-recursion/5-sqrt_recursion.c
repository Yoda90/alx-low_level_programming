
#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{

	int _sq(int n, int s);
	int s;

	s = 1;
	return (_sq(n, s));
}
/**
 * _sq - returns the natural square root of a number
 * @n: number to calculate
 * @s: number to test
 * Return: -1 if n does not have a natural square root
 */
int _sq(int n, int s)
{
	if (n == s * s)
	{
		return (s);
	}
	else if (s < n)
	{
		return (_sq(n, 1 + s));
	}
	else
	{
		return (-1);
	}
}

