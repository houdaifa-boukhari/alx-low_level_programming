#include "stdio.h"

/**
 * main - print number the argument
 * @argc: number of argumment
 * @argv: array of argument
 * Ruturn: always 0
**/

int	main(int argc, char **argv)
{
	(void)**argv;
	printf("%d", argc - 1);
	return (0);
}

