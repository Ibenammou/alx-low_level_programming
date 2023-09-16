#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the node of a dlistint_t.
 * @head: pointer.
 * @index: index of the node.
 * Return: nth of the node or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *node = head;
unsigned int i;
for (i = 0; node; i++)
{
if (i == index)
return (node);
node = node->next;
}
return (NULL);
}
