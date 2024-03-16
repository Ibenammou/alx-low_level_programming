#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located
 * or NULL if not present or if list is NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current, *prev;
	size_t jump, step;

	if (list != NULL)
	{
		jump = sqrt(size);
		current = list;
		while (current != NULL && current->n < value)
		{
			prev = current;
			step = jump;
			while (step > 0 && current->next != NULL &&
				current->n < value)
			{
				printf("Value checked at index [%lu] = [%d]\n",
					current->index, current->n);
				prev = current;
				current = current->next;
				step--;
			}
		}

		printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);
		while (prev != NULL && prev->index < current->index)
		{
			printf("Value checked at index [%lu] = [%d]\n",
				prev->index, prev->n);
			if (prev->n == value)
				return (prev);
			prev = prev->next;
		}
	}
	return (NULL);
}
