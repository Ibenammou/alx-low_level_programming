#include "main.h"

/**
 * _memset - Copies the character s
 * @s: Pointer to the memory to be filled
 * @b: value to be set
 * @n: number of byte to be set
 * Return: return pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*while (i < n)*/
	/*{*/
		/*s[i] = b;*/
		/*i++;*/
	/*}*/
	/*return (s);*/
/*}*/

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
