#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @n:  bytes from memory area
 * @src: memory area src
 * @dest: memory area dest
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}

return (dest);
}
