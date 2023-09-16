#include "lists.h"
/**
 * dlistint_len - function that returns the number
 * of elements in a dlistint_t list.
 * @h: pointer to head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t index = 0;
while (h != NULL)
{
index++;
h = h->next;
}
return (index);
}
