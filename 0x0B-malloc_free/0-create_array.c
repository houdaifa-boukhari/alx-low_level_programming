#include "main.h"

/**
* create_array - allocation memory new_str
* @c: the character to allocation
* @size: the size of the memory to print
*
* Return: NEw str.
*/

char *create_array(unsigned int size, char c)
{
	char *str;

	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
		return (NULL);
	str = memset(str, c, size);
	return (str);
}
