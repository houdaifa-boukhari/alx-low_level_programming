#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number1
 * @m: number2
 * Return: returns the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nb;
	int i;

	nb = n ^ m;
	i = 0;
	while (nb)
	{
		i += nb & 1;
		nb >>= 1;
	}
	return (i);
}
