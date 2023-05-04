#include "main.h"

/**
* get_endianness - checks the indianness.
* Return: return 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c)
	return (1);
	else
	return (0);
}
