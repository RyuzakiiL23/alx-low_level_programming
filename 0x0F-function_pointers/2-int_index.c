#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array of integers
 * @size: size of the array
 * @cmp: pointer to the comparison function
 *
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
