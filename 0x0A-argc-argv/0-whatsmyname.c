#include <stdio.h>

/**
*main - Entry point; prints its name, followed by a new line.
*@argc: arguments count
*@argv: arguments vecctor
*Return: always 0
*/

int main(int argc, char *argv[])
{
printf("%s\n", argv[argc - 1]);
return (0);
}
