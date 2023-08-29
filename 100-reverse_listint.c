#include "lists.h"

/**
 * reverse_listint -  function that reverses a listint_t linked list.
 *
 * @head: pointer to pointer to the first node
 *
 * Return:  a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (!head || !*head)
		return (NULL);

	prev = *head;
	*head = NULL;
	while (prev)
	{
		next = prev->next;
		prev->next = *head;
		*head = prev;
		prev = next;
	}

	return (*head);
}

