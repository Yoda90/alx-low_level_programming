#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int t;
	int o;

	for (t = 0; t <= 99; t++)
	{
		for (o = t; o <= 99; o++)
		{
			if (t != o)
			{
				printf("%02d %02d", t, o);
				if (t != 98 || o != 99)
				{
					printf(", ");
				}
			}

		}
	}
	putchar('\n');
	return (0);
}

