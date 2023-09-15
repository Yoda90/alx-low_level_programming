#include "variadic_functions.h"

/**
 * print_all - print any number
 * @format: its a string to a pointer
 *
 * Return:
 */
void print_all(const char * const format, ...)
{
	va_list print;
	unsigned int j = 0;
	char *s;
	char *separator;

	va_start(print, format);

	separator = "";

	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", separator, va_arg(print, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(print, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(print, double));
				break;
			case 's':
				s = va_arg(print, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				j++;
				continue;
		}
		separator = ", ";
		j++;
	}
	printf("\n");
	va_end(print);
}

