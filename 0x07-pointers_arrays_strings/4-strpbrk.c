#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the set of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p, *q;

	for (p = s; *p != '\0'; p++)
	{
		for (q = accept; *q != '\0'; q++)
		{
			if (*p == *q)
			{
				return (p);
			}
		}
	}
	return (NULL);
}
