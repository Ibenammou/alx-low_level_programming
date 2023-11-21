#include "lists.h"

/**
 * sum_dlistint - function that return sum of data in a list
 * @head: params
 *
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;

	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}
	return (sum_data);
}
