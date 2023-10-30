#include "main.h"

/**
* argstostr - concatenates all the arguments of your program
* @av: strings
* @ac: number of strings
*
* Return: new string.
*/

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int len_str = 0;
	int total_len = 0;
	char *str;


	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		total_len += strlen(av[i]);
		i++;
	}
	str = (char *)malloc(sizeof(char) * (total_len + ac + 1));
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[len_str] = av[i][j];
			len_str++;
			j++;
		}
		str[len_str++] = '\n';
		i++;
	}
	str[len_str] = '\0';
	return (str);
}
