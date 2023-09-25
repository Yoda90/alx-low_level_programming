#include "lists.h"

/**
 * listint_len - a function that returns all the elements of a listint_t list.
 * @h: a pointer to Node
 *
 * Return: countnum
 */
size_t listint_len(const listint_t *h)
{
	size_t countnum = 0;

	while (h)
	{

		countnum += 1;
		h = h->next;
	}

	return (countnum);
}
