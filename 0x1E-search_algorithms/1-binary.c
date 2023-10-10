#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: If value is found, return the index; otherwise, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int left = 0;
	int right = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int middle = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");

		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
			left = middle + 1;

		else
			right = middle - 1;
	}
	return (-1);
}
