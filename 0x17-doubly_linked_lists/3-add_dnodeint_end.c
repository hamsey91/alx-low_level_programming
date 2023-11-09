#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 *		of a dlistint_t list.
 *
 * @head: Pointer to a pointer to the head of the dlistint_t list.
 * @n: The integer that field the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	i = *head;

	while (i->next != NULL)
	{
		i = i->next;
	}
	i->next = new_node;
	new_node->prev = i;

	return (new_node);
}
