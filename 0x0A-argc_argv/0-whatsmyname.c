#include <stdio.h>

/*
* main - prints the first argumment
*@argc: number of argumment
*@argv: array of argumment
*Return: always 0
*/

int	main(int argc, char **argv)
{
	if (argc >= 1)
		printf("%s", argv[0]);
	return (0);
}
