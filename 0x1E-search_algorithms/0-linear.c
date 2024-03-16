#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in a array of integers using
 * linear search
 * @array: Pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the first index where value is located,
 * or -1 if not present or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
