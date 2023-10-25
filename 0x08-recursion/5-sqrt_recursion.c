#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root
 * Return: the resulting square root
 */

int	_sqrt_recursion(int n)
{
	int i;

	i = 1;
	if (n <= 0)
		return (-2);
	while (i <= n)
	{
		if (i * i == n)
			return (i);
		if (i > 46340)
			return (-1);
		i++;
	}
	return (-1);
}
