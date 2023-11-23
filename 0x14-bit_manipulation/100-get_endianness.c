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

	i = 1;
	p = (char *)i;
	return ((int)*p);
}
