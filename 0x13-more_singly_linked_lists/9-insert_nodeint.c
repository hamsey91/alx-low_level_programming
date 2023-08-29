#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 *			at a given position.
 *
 * @head: pointer to the first node
 * @idx: the index of the list where the new node should be added
 * @n: data in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		else
			node = node->next;
	}

	return (NULL);
}

