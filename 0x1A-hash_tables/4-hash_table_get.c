#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated
 * with a key.
 * @ht: hash table.
 * @key:  the key.
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *element;
unsigned long int i;
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
i = key_index((unsigned char *)key, ht->size);
element = ht->array[i];
while (element != NULL)
{
if (strcmp(element->key, key) == 0)
return (strdup(element->value));
element = element->next;
}
return (NULL);
}
