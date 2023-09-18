#include "main.h"

/**
 * _abs - Entry point
 * @i: integer
 * Description: prints the absolute value of an integer
 * Return: int
 */

int _abs(int i)
{
if (i > 0)
{
return (i);
}
if (i < 0)
{
return (i * -1);
}
else
{
return (0);
}
}
