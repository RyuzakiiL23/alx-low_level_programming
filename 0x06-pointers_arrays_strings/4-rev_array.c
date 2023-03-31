#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers
 * @a: array lists
 * @n: number of elements of the array
 * Return: return nothing
 */

void reverse_array(int *a, int n)
{
int i;

i = n - 1;
while (i >= 0)
{
if (i != (n - 1))
{
printf(", ");
}
printf("%d", a[i]);
i--;
}
printf("\n");
}
