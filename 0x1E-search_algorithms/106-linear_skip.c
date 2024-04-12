#include "search_algos.h"

/**
  * linear_skip - Function that searches for a value in a sorted
  *      skip list of integers.
  *
  * @list: Pointer to the head of the list to search in.
  * @value: The value to search for it.
  *
  * Return: 0 If value is not present in head or if head is NULL
  *         Pointer to the first node where value is located.
  */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *n, *leap;

	if (list == NULL)
		return (NULL);

	for (n = leap = list; leap->next != NULL && leap->n < value;)
	{
		n = leap;
		if (leap->express != NULL)
		{
			leap = leap->express;
			printf("Value checked at index [%ld] = [%d]\n",
					leap->index, leap->n);
		}
		else
		{
			while (leap->next != NULL)
				leap = leap->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			n->index, leap->index);

	for (; n->index < leap->index && n->n < value; n = n->next)
		printf("Value checked at index [%ld] = [%d]\n", n->index, n->n);
	printf("Value checked at index [%ld] = [%d]\n", n->index, n->n);

	return (n->n == value ? n : NULL);
}
