#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *newele;
unsigned long int i;
int f = 1;
if (ht == NULL)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
newele = ht->array[i];
while (newele != NULL)
{
if (!f)
printf(", ");
printf("'%s': '%s'", newele->key, newele->value);
f = 0;
newele = newele->next;
}
}
printf("}\n");
}
