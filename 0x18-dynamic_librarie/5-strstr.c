#include "main.h"
#include <string.h>

/**
 * _strstr - This func locate a sub string
 * @haystack: This is the main C string to be scanned.
 * @needle: This is the small string to be searched with-in haystack string.
 * Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *res;

	res = strstr(haystack, needle);
	return (res);
}
