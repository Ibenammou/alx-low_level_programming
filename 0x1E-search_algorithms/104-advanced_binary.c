#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursively searches for a value in a
 * sorted array
 * @array: Pointer to the first element of the array
 * @low: the low index of the search range
 * @high: the high index of the search range
 * @value: the value to search for
 * Return: the index where the value is located,
 * or -1 if not present
 */

int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid, p;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (p = low; p <= high; p++)
		{
			printf("%d", array[p]);
			if (p < high)
				printf(", ");
		}
		printf("\n");

		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			if (mid > 0 && array[mid - 1] == value)
				return (advanced_binary_recursive(array, low,
					mid, value));
			return (mid);
		}
		else if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1,
				high, value));
		else
			return (advanced_binary_recursive(array, low, mid - 1,
				value));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the index where the value is located,
 * or -1 if not present or if the array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array != NULL)
		return (advanced_binary_recursive(array, 0, size - 1, value));
	return (-1);
}
