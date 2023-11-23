#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int nb;

	if (index >= sizeof(n) * 8)
		return (-1);
	nb = 1 << index;
	*n = (*n) | nb;
	return (1);
}
