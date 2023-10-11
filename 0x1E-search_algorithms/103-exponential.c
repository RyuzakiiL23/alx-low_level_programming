#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where 'value' is located. If 'value' is not present
 *         in 'array' or if 'array' is NULL, return -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left;
	size_t right;
	size_t mid;
	size_t i = 0;

	if (array == NULL)
		return (-1);

	if (size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	left = bound / 2;
	right = (bound < size - 1) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}
		if (array[mid] == value)
			return ((int)mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
