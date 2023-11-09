#include "variadic_functions.h"

/**
 * print_numbers - print_numbers passed a parametr
 * @separator: sep
 * @n:  is the number of integers passed to the function
 *
 * Return: NOTHINGe
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	va_start(args, n);
	i = 0;
	while (i < (int)n - 1)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
		i++;
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
