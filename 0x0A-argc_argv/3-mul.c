#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: counts arguments
 *
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
