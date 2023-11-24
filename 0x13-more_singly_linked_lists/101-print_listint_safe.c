#include "lists.h"

/**
 * check_loop - it cheacks if loop is there or not
 * @head: pointer of linked list
 * @ptr1: pointer that pointes at the element to print
 * @nb: nuber the element
 *
 * Return: 1 is true or 1 is fals
 */

int	check_loop(const listint_t *head, const listint_t *ptr1, size_t nb)
{
	const listint_t *ptr;

	ptr = head;
	while (ptr && nb > 0)
	{
		if (ptr == ptr1)
			return (1);
		ptr = ptr->next;
		nb--;
	}
	return (0);
}

/**
 * print_listint_safe - print all the element os linkd list
 * @head: pointer of linked list
 *
 * Return: number the element
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t *ptr;

	ptr = head;
	count = 0;
	while (ptr)
	{
		if (!check_loop(head, ptr, count))
			printf("[%p] %d\n", (void *)(ptr), ptr->n);
		else
		{
			printf("-> [%p] %d\n", (void *)(ptr), ptr->n);
			return (count);
		}
		count++;
		ptr = ptr->next;
	}
	return (count);
}
