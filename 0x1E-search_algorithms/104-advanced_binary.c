#include "search_algos.h"

/**
 * rec - Recursive function to find the first index where 'value' is located.
 * @middle: The current index in the 'array' being checked.
 * @array: Pointer to the array of integers.
 * @value: The value to search for.
 *
 * Return: The first index where 'value' is located, or 'middle' if not found.
 */
int rec(int middle, int *array, int value)
{
	int new_mid = middle - 1;

	if (array[middle - 1] == value)
		return (rec(new_mid, array, value));
	return (middle);
}

/**
 * advanced_binary - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: If value is found, return the index; otherwise, return -1
 */
int advanced_binary(int *array, size_t size, int value)
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
			if (i == left)
				printf("%d", array[i]);
			else
				printf(", %d", array[i]);
		printf("\n");

		if (array[middle] == value)
		{
			middle = rec(middle, array, value);
			return (middle);
		}

		if (array[middle] < value)
			left = middle + 1;

		else
			right = middle - 1;
	}
	return (-1);
}
