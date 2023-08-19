#include "main.h"
/**
 *print_square - prints square.
 *
 *@size: holds square shape.
 */
void print_square(int size)

{
	int i, k;

	if (size <= 0)
	{
		putchar('\n');
	}
	else

	{


		for (i = 1; i <= size; i++)

		{
			for (k = 1; k <= size; k++)
			{
				putchar('#');

			}

			putchar('\n');
		}
	}

}
