#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	standar( time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 = 0)
	{
		printf("%d is zero\n", n);
	}
	if else (n % 10 < 6)
	{
		printf("is %d and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("is %d and is greater than 5\n", n);
	}
	return (0);
}
