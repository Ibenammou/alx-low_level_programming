#include "main.h"
#include <string.h>

/**
 * _strchr - searches for first occurance of char
 * @s: string to scan
 * @c: charac to search
 * Return: pointer of first occ
 */

char *_strchr(char *s, char c)
{
	char *res;

	res = strchr(s, c);
	return (res);
}
