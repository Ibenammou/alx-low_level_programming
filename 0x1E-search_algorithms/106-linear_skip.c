#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: a pointer to the first node where value is located or
 * NULL if not found or if list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
		return (NULL);
	express = list->express;
	current = list;

	while (express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			express->index, express->n);

		if (express->n >= value)
			break;
		current = express;
		express = express->express;
	}
	printf("Value found between indexes [%lu] = [%d]\n",
		current->index, current->n);

	while (current != NULL && current->n <= express->n)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			current->index, current->n);

		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
