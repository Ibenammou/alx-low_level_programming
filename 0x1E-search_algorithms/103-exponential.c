#include "search_algos.h"

/**
 * print_subarray - Prints the elements of the array in the
 * specified range
 * @array: pointer to the first element of the array
 * @low: the low index of the range
 * @high: the high index of the range
 */
void print_subarray(int *array, size_t low, size_t high)
{
	size_t p;

	for (p = low; p <= high; p++)
	{
		printf("%d", array[p]);
		if (p < high)
			printf(", ");
	}
	printf("\n");
}

/**
 * bin_search - Searches for a value in a sorted array
 * using binary search
 * @array: pointer to the first element of the array to search in
 * @low: the low index of the search range
 * @high: the high index of the search range
 * @value: value to search for
 *
 * Return: the index where value is located,
 * or -1 if not present
 */
int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		print_subarray(array, low, high);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using
 * exponential search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the index where value is located,
 * or -1 if not present or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low, high;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (bin_search(array, low, high, value));
}
