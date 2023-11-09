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
	while (i < (int)n)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else if (separator && i == 0)
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", separator, va_arg(args, int));
		i++;
	}
	printf("\n");
	va_end(args);
}
