#include "lists.h"

/**
 * free_listint2 -  function that frees a listint_t list.
 *
 * @head: pointer to pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (!head)
		return;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}

	*head = NULL;
}



