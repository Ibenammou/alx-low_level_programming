#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using
 * binary search
 * @array: Pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1 if not present
 * or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, x;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (x = left; x <= right; x++)
		{
			printf("%d", array[x]);
			if (x < right)
				printf(", ");
		}
		printf("\n");

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
