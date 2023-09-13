#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name of the person
 *@f: function to a pointer
 * Return:
 */
void print_name(char *name, void (*f)(char *))
{

		f(name);

}
