#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the value to multiply
 * @y: the times to multiply the value
 * Return: the power of x
 */

int	ft_recursive_power(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (0);
	}
	return (x * ft_recursive_power(x, y -1));
}
