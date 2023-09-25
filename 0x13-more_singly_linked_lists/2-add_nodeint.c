#include "lists.h"

/**
 * add_nodeint - a function adds a new node
 * at the beginning of a listint_t list.
 * @n: an integer
 *@head: a pointer
 * Return: new_node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
