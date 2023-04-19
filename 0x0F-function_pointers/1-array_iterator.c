#include <stddef.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* @array: A pointer to the first element of the array.
* @size : The number of elements in the array.
* @action: is a pointer to the function that will be exicuted
* Return : void.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
