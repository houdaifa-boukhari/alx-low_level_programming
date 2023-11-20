#include "lists.h"

/**
 * listint_len - calcule number the all element os linkd list
 * @h: pointer of the header linked list
 *
 * Return: number the element
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
