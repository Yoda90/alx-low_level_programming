#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: single linked list.
 *
 * Return: number of count.
 */

size_t print_list(const list_t *h)
{
	int number_count;

	number_count = 0;

	while (h != NULL)
	{	number_count++;

		if (!h->str)
			printf("[0], (nil)\n");

		else

			printf("[%u]  %s\n", h->len, h->str);

		h = h->next;

	}

	return (number_count);

}

