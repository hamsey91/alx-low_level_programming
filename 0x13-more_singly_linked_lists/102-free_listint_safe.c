#include "lists.h"
#include <stdlib.h>

/**
 * finf_listint_loop_fl - function that find a loop in a a listint_t list.
 *
 * @head: pointer to the first node
 *
 * Return: adress to the node where the loop begin, 0 if no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - function that frees a listint_t list.
 *
 * @h: pointer to pointer to the first node
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *lp_node;
	size_t len;
	int lp = 1;

	if (h == NULL || *h == NULL)
		return (0);

	lp_nood = find_listint_loop_fl(*h);
	for (len = 0; (*h != lp_node || lp) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == lp_node && lp)
		{
			if (lp_node == lp_node->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			lp = 0;
		}
		free(*h);
	}
	*h = NULL;

	return (len);
}
