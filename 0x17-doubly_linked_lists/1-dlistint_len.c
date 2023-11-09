#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 *		in a linked dlistint_t list.
 *
 * @h: Pointer to the head of the dlistint_t list.
 *
 * Return: Count of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
