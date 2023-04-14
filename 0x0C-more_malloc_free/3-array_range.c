#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Entry point
 *
 * @min: minimal num
 * @max: maximal num
 *
 * Return: returns a pointer to the array
 */

int *array_range(int min, int max)
{
	int i;
	int *mmx;

	if (min > max)
	{
		return (NULL);
	}
	mmx = malloc(sizeof(int) * (max - min + 1));
	if (mmx == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		mmx[i] = min + i;
	}
	return (mmx);
}
