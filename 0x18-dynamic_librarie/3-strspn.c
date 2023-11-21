#include "main.h"
#include <string.h>

/**
 * _strspn - calcs the len of int str consist of sec str
 * @s: main str
 * @accept: contain list of char
 * Return: num of character
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
