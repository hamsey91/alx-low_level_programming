#include "lists.h"

/**
 * free_list - function that frees a list_t lis
 *
 * @head: pointer to the first node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
