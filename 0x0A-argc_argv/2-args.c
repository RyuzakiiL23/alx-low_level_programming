#include <stdio.h>

/**
 *main - Entry point, print all arguments that receive.
 *@argc: arguments count
 *@argv: arguments victor
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
