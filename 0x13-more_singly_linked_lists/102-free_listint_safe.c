#include "lists.h"
#include <stdlib.h>

/**
 * f_loop_place - function that find a loop in a a listint_t list.
 *
 * @head: pointer to pointer to the first node
 *
 * Return: adress to the node where the loop begin, 0 if no loop
 */
listint_t *f_loop_place(listint_t *head)
{
	listint_t *p, *end;

	if (!head)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (p = head; p != end; p = p->next)
			if (p == end->nest)
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
	int loop = 1;

	if (!h || !*h)
		return (0);

	lp_nood = f_loop_place(*h);
	for (len = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == lp_node && loop)
		{
			if (lp_node == lp_node->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}

	*h = NULL;

	return (len);
}
