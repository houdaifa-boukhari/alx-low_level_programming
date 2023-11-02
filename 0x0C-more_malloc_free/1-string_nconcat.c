#include "main.h"

/**
* str_nconcat - concat s1 and s2
* @s1: the first string
* @s2: the secend string
* @n: number the s2 contact with s1
*
* Return: new str.
*/

char *str_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	char *str;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

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
	while (s2[j] != '\0' && n--)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
