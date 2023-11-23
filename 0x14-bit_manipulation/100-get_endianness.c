#include "main.h"

/**
 * get_endianness - that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	size_t i;
	char *p;

	p = (char *)&i;
	i = 1;
	return ((int)*p);
}
