#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: a pointer to Node
 *
 * Return: countnum
 */
size_t print_listint(const listint_t *h)
{
	size_t countnum = 0;

	while (h)
	{

		printf("%d\n", h->n);
		countnum += 1;

		h = h->next;
	}

	return (countnum);
}
