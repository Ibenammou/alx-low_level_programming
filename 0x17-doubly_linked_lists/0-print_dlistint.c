#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to head.
 * Return: integer.
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t index = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
index++;
}
return (index);
}
