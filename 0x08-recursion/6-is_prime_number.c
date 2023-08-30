#include "main.h"
/**
 * is_prime_number - function that returns prime numbers
 * @n: number to calculate
 * @x:is an integer
 * Return: 0
 */

int is_pr(int n, int x);
int is_prime_number(int n)

{
	int x = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (is_pr(n, x));
}

/**
 *  is_pr - determines if the number is a prime number
 * @n: is an integer
 * @x: is an integer
 * Return: 1, 0
 */

int is_pr(int n, int x)
{
	if (x <= 1)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	return (is_pr(n, x - 1));
}




