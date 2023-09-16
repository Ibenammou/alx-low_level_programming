#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: double pointer to the head.
 * @index: index of the node to delete.
 * Return: 1 or -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *the_node, *tp;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
the_node = *head;
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(the_node);
return (1);
}
for (i = 0; i < index && the_node != NULL; i++)
the_node = the_node->next;
if (the_node == NULL)
return (-1);
tp = the_node;
the_node->prev->next = the_node->next;
if (the_node->next != NULL)
the_node->next->prev = the_node->prev;
free(tp);
return (1);
}
