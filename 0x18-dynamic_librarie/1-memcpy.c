#include "main.h"
#include <string.h>

/**
 * _memcpy - copies a character from mem
 * @dest: destination array where pointer
 * is to be copied
 * @src: src of data to be copied
 * @n: num of bytes to be coiped
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
