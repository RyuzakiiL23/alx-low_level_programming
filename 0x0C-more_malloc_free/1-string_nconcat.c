#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 *
 * @s1: string one
 * @s2: string two
 * @n: num of bytes
 *
 * Return: return a pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *sconcat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2] && len2 < n)
	{
		len2++;
	}
	sconcat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (sconcat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		sconcat[i] = s1[i];
	}
	for (j = 0; j < n && s2[j]; j++)
	{
		sconcat[len1 + j] = s2[j];
	}
	sconcat[len1 + j] = '\0';
	return (sconcat);
}
