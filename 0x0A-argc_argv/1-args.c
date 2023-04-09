#include <stdio.h>

/**
* main - Entry point, prints the number of arguments.
* @argc: arguments count
* @argv: arguments vector
* Return: always 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
