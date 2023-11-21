#include "main.h"
#include <string.h>

/**
 * _strncpy - string to copy
 * @dest: the destination
 * @src:  the source
 * @n: num
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
