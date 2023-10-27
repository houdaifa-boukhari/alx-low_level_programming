#include "stdio.h"

/**
* main - prints the first argumment
* @argc: number of argumment
* @argv: array of argumment
*
* Return: always 0
*/

int	main(int argc, char **argv)
{
	(void)**argv;
	printf("%d", argc - 1);
	return (0);
}

