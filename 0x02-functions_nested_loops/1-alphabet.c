#include "main.h"
  /**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
}
