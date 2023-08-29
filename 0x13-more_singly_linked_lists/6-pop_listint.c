#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 *		linked list, and returns the head node’s data (n).
 *
 * @head: pointer to pointer to the first node
 *
 * Return: the data in the deleted node,
 *	or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->i;
	node = (*head)->next
	free(*head);
	*head = node;
	
	return (i);
}
