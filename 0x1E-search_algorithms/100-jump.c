#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using jum
 * search
 * @array: pointer to the 1st element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located or
 * -1 if not present or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), left = 0, right = 0, x;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (x = left; x < size && x <= right; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
