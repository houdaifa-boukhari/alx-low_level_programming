#include "main.h"

/**
* str_concat - concat s1 and s2
* @s1: the first string
* @s2: the secend string
*
* Return: NEw str.
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = strlen(s1) + strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * i);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
