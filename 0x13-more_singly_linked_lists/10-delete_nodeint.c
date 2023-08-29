#include "lists.h"

/**
 * delete_nodeint_at_index - unction that deletes the node at index index
 *			of a listint_t linked list.
 *
 * @head: pointer to the first node
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0
	listint_t *node = *head;
	listint_t *p_node = NULL;

	if (!*head)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (i < index - 1)
	{
		if (!node || !(node->next))
			return (-1);
		node = node->next;
		i++;
	}


	p_node = node->next;
	node->next = p_node->next;
	free(p_node);

	return (1);
}
