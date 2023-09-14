#include "variadic_functions.h"

/**
 * print_all - print any number
 * @format: its a string to a pointer
 *
 * Return:
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char j = 0;
	char *s;

	va_start(args, format);

	while (format[i])
	{
	char type = format[i++];
		if (type == 'c' || type == 'i' || type == 'f' || type == 's')
		{
			if (type == 'c')
			{
				j = va_arg(args, int);
				printf("%c ", j);
			}
			else if (type == 'i')
			{
				printf("%d ", va_arg(args, int));
			}
			else if (type == 'f')
			{
				printf("%f ", va_arg(args, double));
			}
			else if (type == 's')
			{
				s = va_arg(args, char *);
				printf("%s ", s ? s : "(nil)");
			}
		}
	}

	printf("\n");

	va_end(args);

}
