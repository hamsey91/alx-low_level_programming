#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 *
 * @h: pointer to pointer to the first node
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node;
	size_t len ;
	int loop;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		loop = *h - (*h)->next;
		if (loop > 0)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
