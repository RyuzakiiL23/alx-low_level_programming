#include "variadic_functions.h"

/**
 * print_i - Prints a char.
 *@arg: A va_list containing the argument to print
 */
void print_i(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}
/**
 * print_c - Prints an int.
 * @arg: A va_list containing the argument to print
 */
void print_c(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}
/**
 * print_s - Prints a string.
 * @arg: A va_list containing the argument to print
 */
void print_s(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}
/**
* print_f - prints a float
* @arg: A va_list containing the argument to print
*/
void print_f(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
* print_all - print all variables followed by a new line
* @format : is a list of types of arguments passed to the function
* Return: void
*/

	void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	int j;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
