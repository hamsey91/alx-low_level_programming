#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index
 *			of a listint_t linked list.
 *
 * @head: pointer to pointer to the first node
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *p_node;
	unsigned int i = 0

	if (!head || !*head)
		return (-1);

	if (index == NULL)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (node = *head)
	{
		if (i == index)
		{
			p_node->next = node->next
			free(node)
			return (1);
		}
		i++;
		p_node = node;
		node = node->next;
	}

	return (-1);
}
