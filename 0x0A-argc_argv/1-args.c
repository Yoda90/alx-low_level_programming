#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @argv: is an array of pointers to array of character objects.
 * @argc: integer that indicates how many arguments
 *  were entered on the command line.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv != NULL)
	printf("%d\n", argc - 1);
	return (0);
}
