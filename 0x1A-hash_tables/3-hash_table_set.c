#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table.
 * @key: the key.
 * @value: the value.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht,
const char *key, const char *value)
{
hash_node_t *newEle, *element;
unsigned long int i;
if (ht == NULL || key == NULL || *key == '\0')
return (0);
i = key_index((unsigned char *)key, ht->size);
element = ht->array[i];
while (element != NULL)
{
if (strcmp(element->key, key) == 0)
{
free(element->value);
element->value = strdup(value);
return (1);
}
element = element->next;
}
newEle = malloc(sizeof(hash_node_t));
if (newEle == NULL)
return (0);
newEle->key = strdup(key);
newEle->value = strdup(value);
if (newEle->key == NULL || newEle->value == NULL)
{
free(newEle->key);
free(newEle->value);
free(newEle);
return (0);
}
newEle->next = ht->array[i];
ht->array[i] = newEle;
return (1);
}
