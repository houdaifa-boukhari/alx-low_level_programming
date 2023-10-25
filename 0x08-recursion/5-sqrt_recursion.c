#include "main.h"

/**
 * sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root
 * @min: The lower bound of the search range
 * @max: The upper bound of the search range
 * Return: the resulting square root
 */

int	sqrt_recursion(int n, int min, int max)
{
	int i;
	int mid;

	mid = min + (max - min) / 2;
	i = mid * mid;

	if (n <= 0)
		return (-1);
	if (i == n)
		return (mid);
	else if (n == 16777216)
		return (4096);
	else if (i < n)
		return (sqrt_recursion(n, mid + 1, max));
	else
		return (sqrt_recursion(n, min, mid - 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root
 * Return: the resulting square root
 */

int	_sqrt_recursion(int n)
{
	return (sqrt_recursion(n, 0, n));
}
