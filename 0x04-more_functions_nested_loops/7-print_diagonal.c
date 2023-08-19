#include "main.h"

/**
 * print_diagonal - straight line in terminal
 *
 *@n: holds a diagonal line
 */
void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
	{
		putchar('\n');
	}
	else

	{


		for (i = 1; i <= n; i++)
		{
			for (k = 1; k <= i; i++)
			{
				putchar(' ');

			}
			putchar('\\');
			putchar('\n');
		}
	}

}
