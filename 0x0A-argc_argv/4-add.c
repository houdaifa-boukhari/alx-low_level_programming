#include <stdio.h>

/**
* short_atoi - change string to number
* @str: array of string
*
* Return: integer
*/

int	short_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

/**
* cheack - cheack is number or not
* @str: string
*
* Return: 1 is true , 0 or not
*/

int	cheack(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i])
		i++;
	while (str[j] >= '0' && str[j] <= '9')
		j++;
	if (i == j)
		return (1);
	else
		return (0);
}

/**
* main - prints the first argumment
* @argc: number of argumment
* @argv: array of argumment
*
* Return: always 0
*/

int	main(int argc, char **argv)
{
	int result;
	int i;

	result = 0;
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (cheack(argv[i]))
			{
				result += short_atoi(argv[i]);
				i++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	else
		printf("0");
	return (0);
}
