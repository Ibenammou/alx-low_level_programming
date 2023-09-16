#include "lists.h"
/**
 * insert_dnodeint_at_index - function that insertsnew node
 * at a given position.
 * @h: double pointer to head.
 * @idx:  the index of the list where the new node should be added.
 * @n: integer.
 * Return: pointer to the new node or NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *the_node;
unsigned int i;
if (h == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
}
else
{
the_node = *h;
for (i = 0; i < idx - 1 && the_node != NULL; i++)
the_node = the_node->next;
if (the_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = the_node->next;
if (the_node->next != NULL)
the_node->next->prev = new_node;
the_node->next = new_node;
new_node->prev = the_node;
}
return (new_node);
}
