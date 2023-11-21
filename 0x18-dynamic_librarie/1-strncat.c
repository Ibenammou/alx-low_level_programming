#include "main.h"
#include <string.h>

/**
 * _strncat - String that concat
 * @dest: the destination
 * @src: the source
 * @n: the num
 * Return: String
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
		return (dest);
}
