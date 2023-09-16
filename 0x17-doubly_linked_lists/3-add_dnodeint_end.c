#include "lists.h"
/**
 * add_dnodeint_end - function that adds
 * a new node to the end of  dlistint_t list
 * @head: double pointer to the head.
 * @n: an integer.
 * Return: pointert or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *current_node = *head;
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
}
else
{
while (current_node->next != NULL)
{
current_node = current_node->next;
}
current_node->next = new_node;
new_node->prev = current_node;
}
return (new_node);
}
