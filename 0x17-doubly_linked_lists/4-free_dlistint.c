#include "lists.h"

/**
 * free_dlistint - Function that Frees a dlistint_t list.
 *
 * @head: Pointer to the head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
