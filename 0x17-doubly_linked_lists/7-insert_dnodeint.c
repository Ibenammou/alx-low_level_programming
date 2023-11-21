#include "lists.h"

/**
 * insert_dnodeint_at_index - function insert node at index
 * @h: param
 * @idx: index of list
 * @n: param
 *
 * Return: address OR NULL if (fail)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *current = *h;
	unsigned int count = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = newnode;
		}
		*h = newnode;
	}
	else
	{
		while (current != NULL && count < idx - 1)
		{
			current = current->next;
			count++;
		}
		if (current == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->prev = current;
		newnode->next = current->next;
		if (current->next != NULL)
		{
			current->next->prev = newnode;
		}
		current->next = newnode;
	}
	return (newnode);
}
