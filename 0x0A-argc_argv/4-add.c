#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that  adds positive numbers.
 * @argv: is an array of pointers to array of character objects.
 * @argc: integer that indicates how many arguments
 *  were entered on the command line.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j;

		int num = atoi(argv[i]);

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + num;
	}

	printf("%d\n", sum);

	return (0);
}
