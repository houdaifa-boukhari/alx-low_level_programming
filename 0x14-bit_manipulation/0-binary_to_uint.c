#include "main.h"

/**
 * power_nb - calcule power the number
 * @nb: the number
 * @power: power
 *
 * Return: power the number
 */

int	power_nb(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * power_nb(nb, power - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the number of binary
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int nb;
	int j;

	j = 0;
	nb = 0;
	if (!b)
		return (0);
	i = strlen(b) - 1;
	while (b[j])
	{
		if (b[i] == '1')
		{
			nb += power_nb(2, j);
		}
		else if (b[j] != 48 && b[j] != 49)
			return (0);
		j++;
		i--;
	}
	return (nb);
}
