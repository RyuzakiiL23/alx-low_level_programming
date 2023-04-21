#include "variadic_functions.h"
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

void print_i(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

void print_c(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

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

void print_f(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

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
