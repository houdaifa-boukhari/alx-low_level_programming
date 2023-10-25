#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *@i: the test
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int	check_prime_number(int n, int i)
{
	if (i < 2)
		return (0);
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0)
	return (is_prime_number(n, i + 1));
}

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int	is_prime_number(int n)
{
	return check_prime_number(n, n / 2);
	
}
