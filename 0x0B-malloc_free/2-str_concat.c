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
	char *str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = strlen(s1) + strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * i);
	str = strcat(s1, s2);
	return (str);
}
