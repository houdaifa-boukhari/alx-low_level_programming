#include "main.h"

/**
 * print_binary - print number of binary
 * @n: the number to print
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	char digite;

	if (n >= 2)
	{
		print_binary(n / 2);
		print_binary(n % 2);
	}
	else
	{
		digite = n + 48;
		_putchar(digite);
	}
}
