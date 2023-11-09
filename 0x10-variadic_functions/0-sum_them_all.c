#include "variadic_functions.h"

/**
 * sum_them_all - sun the all integers
 * @n:  is the number of integers passed to the function
 *
 * Return: sum the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(args, n);
	i = 0;
	while (i < (int)n)
	{
		sum += va_arg(args, int);
		i++;
	}
	return (sum);
}
