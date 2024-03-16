#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array using
 * interpolation search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in this array
 * @value: value to search for
 * Return: index where value is located, or -1 if not present
 * or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;
	double rat;

	if (array == NULL)
		return (-1);

	if (array != NULL)
	{
		while ((array[high] != array[low]) && (value >= array[low]) &&
			(value <= array[high]))
		{
			rat = (double)(high - low) /
				(array[high] - array[low]);
			pos = low + (rat * (value - array[low]));
			printf("Value checked array[%lu] = [%d]\n",
				pos, array[pos]);

			if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				high = pos - 1;
			else
				return (pos);
		}
		if (value == array[low])
			return (low);
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
		printf("Value checked array[%lu] is out of range\n", pos);
	}
	return (-1);
}
