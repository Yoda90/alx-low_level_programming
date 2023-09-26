#include "lists.h"

/**
 * add_nodeint_end - a function that prints all
 * the elements of a listint_t list.
 * @n: is an integer
 *@head: head to a pointer
 * Return: countnum
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tem = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)

		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (tem->next)

		tem = tem->next;

	tem->next = new_node;

	return (*head);
}
