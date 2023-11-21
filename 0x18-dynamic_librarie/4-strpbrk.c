#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches str for any set of btyes
 * @s: str occurance
 * @accept: any bytes in string
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	char *res;

	res =  strpbrk(s, accept);
	return (res);
}
