#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 *
 * @head: linked list to search
 *
 * Return: address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start, *end;

	if (!head)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (start = head; start != end; start = start->next)
			if (start == end->next)
				return (end->next);
	}

	return (NULL);
}

