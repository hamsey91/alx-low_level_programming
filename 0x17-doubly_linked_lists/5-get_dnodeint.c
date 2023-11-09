#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 *			a dlistint_t linked list.
 *
 * @head: Pointer to t he head of the dlistint_t list.
 * @index: index of the node.
 *
 * Return: NULL if the node does not exist, Otherwise the node head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head)
	{
		if (idx == index)
			return (head);
		head = head->next;
		idx++;
	}

	return (NULL);
}
