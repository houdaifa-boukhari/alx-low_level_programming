#include "main.h"

/**
 * print_binary - print number of binary
 * @n: the number to print
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int nb;
	int reps;

	nb = n;
	reps = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}
	while ((nb >>= 1) > 0)
		reps++;
	while (reps >= 0)
	{
		if ((n >> reps) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		reps--;
	}
}
