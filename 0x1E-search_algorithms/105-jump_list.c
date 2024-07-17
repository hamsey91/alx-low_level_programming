#include "search_algos.h"
#include <math.h>

/**
  * *jump_list - Function that searches for a value in a sorted array
  *     of integers using the Jump search algorithm.
  *
  * @list: Pointer to the head of the list to search in.
  * @size: The size of the list.
  * @value: The value to search for it.
  *
  * Return: 0 If value is not present in head or if head is NULL
  *         Pointer to the first node where value is located.
  */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t move, move_size;
	listint_t *leap, *n;

	if (list == NULL || size == 0)
		return (NULL);

	move = 0;
	move_size = sqrt(size);
	for (n = leap = list; leap->index + 1 < size && leap->n < value;)
	{
		n = leap;
		for (move += move_size; leap->index < move; leap = leap->next)
		{
			if (leap->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", leap->index, leap->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			n->index, leap->index);

	for (; n->index < leap->index && n->n < value; n = n->next)
		printf("Value checked at index [%ld] = [%d]\n", n->index, n->n);
	printf("Value checked at index [%ld] = [%d]\n", n->index, n->n);

	return (n->n == value ? n : NULL);
}
