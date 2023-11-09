#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 *
 * @h: pointer to the head of the dlistint_t list
 *
 * Return: Size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
