#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in an array using the Jump search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: If value is found, return the index; otherwise, return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt(size);
	int prev = 0;
	int min = 0;
	int i = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (prev < (int)size && array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += step;

		if (prev >= (int)size)
			break;
	}
	min = prev - step;
	printf("Value found between indexes [%d] and [%d]\n", min, prev);
	for (i = min; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		if (array[i] >= value)
			break;
	}
	return (-1);
}
