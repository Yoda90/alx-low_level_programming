#include "3-calc.h"
/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg, arg1, result;
	char c;
	int (*functn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg = atoi(argv[1]);
	arg1 = atoi(argv[3]);

	functn = get_op_func(argv[2]);

	if (!functn)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];

	if ((c == '/' || c == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = functn(arg, arg1);

	printf("%d\n", result);

	return (0);
}
