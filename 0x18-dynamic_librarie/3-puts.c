#include "main.h"

/**
 *  _puts - This script print a string follwed by newline
 *  @str: The string to print
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
