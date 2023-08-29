#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 *			a listint_t linked list.
 *
 * @head: pointer to the first node
 * @index: index of the node to return
 *
 * Return: pointer to the node, if does not exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	for (node = head, i = 0; node && i < index; node = node->next, i++)
		;

	return (node);
}

