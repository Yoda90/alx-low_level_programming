#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argv: is an array of pointers to array of character objects.
 * @argc: integer that indicates how many arguments
 *  were entered on the command line.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
