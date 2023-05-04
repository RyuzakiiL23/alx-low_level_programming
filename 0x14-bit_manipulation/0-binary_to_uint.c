#include "main.h"
/**
* binary_to_uint - convert a binary to decimal.
* @b: a given binary.
* Return: Return the conversion.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;
	int len = 0;

	if (!b)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		len++;
	}

	for (i = 0; i < len; i++)
	{
		result <<= 1;

		if (b[i] == '1')
			result += 1;
	}

	return (result);
}
