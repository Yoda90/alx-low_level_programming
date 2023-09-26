#include "lists.h"
/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: pointer to the 1st node of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
		return;

	while (*head)
	{
		tem = (*head)->next;
		free(*head);
		*head = tem;
	}

	*head = NULL;
}

