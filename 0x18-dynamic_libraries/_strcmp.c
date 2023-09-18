#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: string
 * @s2: string
 * Return: return integer
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
char c = *s1 - *s2;
return (c);
}
}
