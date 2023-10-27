#include <stdio.h>

/*
* short_atoi - change string to number 
*@str: array of string 
*Return: integer
*/

int	short_atoi(char *str)
{
	int i;
	int signe;
	int result;

	i = 0;
	signe = 1;
	result = 0;
	while (str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (signe * result);
}

/*
* main - prints the first argumment
*@argc: number of argumment
*@argv: array of argumment
*Return: always 0
*/

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d", short_atoi(argv[1]) * short_atoi(argv[2]));
	}
	else
		printf("Error");
}
