#include "main.h"

/**
* _strdup - copy string in new string allocated
* @str: string to copy in new string allocated
*
* Return: NEw str.
*/

char *_strdup(char *str)
{
	int i;
	char *new_str;

	if (str == NULL)
		return (NULL);
	i = strlen(str) + 1;
	new_str = (char *)malloc(sizeof(char) * i);
	if (new_str == NULL)
		return (NULL);
	new_str = strcpy(new_str, str);
	return (new_str);
}
