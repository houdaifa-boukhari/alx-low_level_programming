#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: value to index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
		return (0);
	if (index >= sizeof(n) * 8)
		return (-1);
	if ((n >> index)  & 1)
		return (1);
	else
		return (0);
}
