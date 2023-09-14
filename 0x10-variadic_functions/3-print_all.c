#include "variadic_functions.h"

/**
 * print_all - print any number
 * @format: its a string to a pointer
 *
 * Return:
 */
void print_all(const char * const format, ...)
{
	va_list allnumb;
	unsigned int i = 0;
	char *s;
	char *separator;

	va_start(allnumb, format);

	while (format && format[i])

	{
		switch (format[i])

		{
			case 'c':
				printf("%s%c", separator,  va_arg(allnumb, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(allnumb, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(allnumb, double));
				break;
			case 's':
				s = va_arg(allnumb, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}

		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(allnumb);
}
