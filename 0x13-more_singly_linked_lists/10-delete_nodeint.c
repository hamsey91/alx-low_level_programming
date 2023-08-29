#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index @index
 *			 of a listint_t linked list.
 *
 * @head: pointer to pointer to first node
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *prev_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
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


	prev_node = node->next;
	node->next = prev_node->next;
	free(prev_node);
	return (1);
}
