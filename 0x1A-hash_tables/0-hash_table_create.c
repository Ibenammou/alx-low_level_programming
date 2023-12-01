#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 * Return: pointer.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashTable = NULL;
unsigned long int i;
hashTable = malloc(sizeof(hash_table_t));
if (hashTable == NULL)
return (NULL);
hashTable->array = malloc(sizeof(hash_node_t *) * size);
if (hashTable->array == NULL)
{
free(hashTable);
return (NULL);
}
for (i = 0; i < size; i++)
hashTable->array[i] = NULL;
hashTable->size = size;
return (hashTable);
}
