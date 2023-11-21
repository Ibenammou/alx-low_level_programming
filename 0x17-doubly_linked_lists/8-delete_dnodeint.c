#include "lists.h"
/**
 * delete_dnodeint_at_index - function that delete node
 * @head: param
 * @index: index of node
 *
 * Return: 1 (success) OR -1 (fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	if (current->next)
		current->next->prev = current->prev;
	if (current->prev)
		current->prev->next = current->next;

	free(current);
	return (1);

}
