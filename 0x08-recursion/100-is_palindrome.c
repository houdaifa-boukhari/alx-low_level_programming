#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s != '\0')
		return (check_palindrom(s, 0, _strlen_recursion(s)));
	else
		return (1);
}

/**
 * _strlen_recursion - calcule lenght of string
 * @s: string to reverse
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion((s) + 1);
	}
	return (len);

}

/**
 * check_is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * @i: indise the string
 * @len : lenght  of string
 *
 * Return: 1 if it is, 0 it's not
 */

int check_is_palindrome(char *s, int i, int len)
{
	if (s[i] != s[len -1])
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
