#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *newele, *temp;
unsigned long int i;
if (ht == NULL)
return;
for (i = 0; i < ht->size; i++)
{
newele = ht->array[i];
while (newele != NULL)
{
temp = newele->next;
free(newele->key);
free(newele->value);
free(newele);
newele = temp;
}
}
free(ht->array);
free(ht);
}
