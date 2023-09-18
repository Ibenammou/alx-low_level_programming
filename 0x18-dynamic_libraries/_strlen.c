#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: returns the length
 */
int _strlen(char *s)
{
int i;

for (i = 0; *s != '\0'; i++)
{
s++;
}
return (i);
}
