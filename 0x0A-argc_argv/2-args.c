#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
 * @argv: is an array of pointers to array of character objects.
 * @argc: integer that indicates how many arguments
 *  were entered on the command line.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
