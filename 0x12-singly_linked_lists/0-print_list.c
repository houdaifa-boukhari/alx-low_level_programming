#include "lists.h"

/**
 * print_list - print all the element os linkd list
 * @h: pointer of the header linked list
 *
 * Return: number the element
 */

size_t print_list(const list_t *h)
{
	const list_t *p;
	size_t count;

	count = 0;
	p = h;
	while (p != NULL)
	{
		if (p->str)
			printf("[%d] %s\n", p->len, p->str);
		else
			printf("[0] (nil)\n");
		count++;
		p = p->next;
	}
	return (count);
}
