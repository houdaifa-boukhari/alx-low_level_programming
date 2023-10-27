#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the first argumment
* @argc: number of argumment
* @argv: array of argumment
*
* Return: always 0
*/

int main(int argc, char **argv)
{
	int i = 0;
	int tab[] = {25, 10, 5, 2, 1};
	int money;
	int change = 0;

	if (argc == 2)
	{
		money = atoi(argv[1]);
		if (money < 0)
		{
			printf("0\n");
			return (0);
		}
		while (i < 5 && money >= 0)
		{
			while (money >= tab[i])
			{
				money -= tab[i];
				change++;
			}
			i++;
		}
		printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
