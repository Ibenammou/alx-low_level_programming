#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the initial segment
 * @accept: bytes from
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
int k, i, j;
k = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
k++;
}
}
}
else
{
return (k);
}
}
return (k);
}
