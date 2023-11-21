#include "main.h"
/**
 * _isalpha - This checks the alphabetic character
 * @c: The character to be checked
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
