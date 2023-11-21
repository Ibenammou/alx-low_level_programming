#include <stdlib.h>

static int numbers[] = {8, 8, 82, 9, 98, 74};
static int current_index = 0;

/**
 * rand - fake random number generator
 * Return: the generated number
 */
int rand(void)
{
    if (current_index >= sizeof(numbers) / sizeof(numbers[0]))
    {
        current_index = 0;
    }
    return (numbers[current_index++]);
}
