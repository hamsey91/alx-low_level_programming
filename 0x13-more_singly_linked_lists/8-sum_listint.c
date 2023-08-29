#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 *		of a listint_t linked list.
 *
 * @head: pointer to the firstnode
 *
 * Return: The sum, if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}

