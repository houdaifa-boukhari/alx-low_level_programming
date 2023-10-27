#include <stdio.h>

/**
* main - prints the first argumment
* @argc: number of argumment
* @argv: array of argumment
*
* Return: always 0
*/

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
