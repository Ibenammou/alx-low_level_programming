#include "lists.h"

/**
 * get_dnodeint_at_index - function that get node at index
 * @head: param
 * @index: index of the node
 *
 * Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_count = 0;

	while (head != NULL && node_count < index)
	{
		head = head->next;
		node_count++;
	}

	if (node_count == index)
		return (head);
	else
		return (NULL);
}
