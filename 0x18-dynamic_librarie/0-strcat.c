#include "main.h"
#include <string.h>

/**
 * _strcat - Script to concat strings
 * @src: This is the source
 * @dest: This is the destination
 * Return: String
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
