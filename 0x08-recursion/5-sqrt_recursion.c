#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	int i = _sqrt_recursion(n / 4) * 2;
	if ((i * i) <= n && ((i + 1) * (i + 1)) > n)
		return (i);
	else if ((i * i) < n)
		return (i + 1);
	else
		return (-1);
}
