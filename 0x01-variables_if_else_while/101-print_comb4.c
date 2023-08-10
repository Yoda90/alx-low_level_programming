#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int h;
	int t;
	int o;

	for (h = '0'; h <= '7'; h++)
	{
		for (t = h + 1; t <= '8'; t++)
			for (o = t + 1; o <= '9'; o++)
			{
				putchar(h);
				putchar(t);
				putchar(o);
				if (h != '7' || t != '8' || o != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}

