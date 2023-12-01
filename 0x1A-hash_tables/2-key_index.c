#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @key: the key.
 * @size: size.
 * Return: the index.
 */
unsigned long int key_index(const unsigned char
*key, unsigned long int size)
{
unsigned long int kkey;
unsigned long int i;
kkey = hash_djb2(key);
i = kkey % size;
return (i);
}
