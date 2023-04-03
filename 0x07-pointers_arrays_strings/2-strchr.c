#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
