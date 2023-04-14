#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Entry point
 *
 * @nmemb: number of elements
 * @size: the size of the array
 *
 * Return: returns a pointer to the array's memory address
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *clc;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	clc = malloc(nmemb * size);
	if (clc == 0)
	{
		return (NULL);
	}
	memset(clc, 0, nmemb * size);
	return (clc);
}
