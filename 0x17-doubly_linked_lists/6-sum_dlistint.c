#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of data
 * of a dlistint_t list.
 * @head: pointer to head.
 * Return: sum or 0.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
int index;
dlistint_t *node = head;
for (index = 0; node; index++)
{
sum += node->n;
node = node->next;
}
return (sum);
}
