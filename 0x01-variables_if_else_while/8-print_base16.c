#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int d = '0';
	char i = 'a';

	while (d <= '9')
	{
		putchar(d);
		d++;

	}
	while (i <= 'f')

	{
		putchar(i);

		i++;

	}

putchar('\n');
return (0);
}
