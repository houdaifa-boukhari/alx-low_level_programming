#include "hash_tables.h"

/**
 * free_list - frees a list
 * @head: pointer to the head of the list
 */

void free_list(hash_node_t *head)
{
	hash_node_t *next;

	while (head)
	{
		next = head->next;
		if (head->value != NULL)
			free(head->value);
		if (head->key != NULL)
			free(head->key);
		free(head);
		head = NULL;
		head = next;
	}
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i = 0;

	if (!ht || !ht->array || ht->size == 0)
		return;
	while (i < ht->size)
	{
		ptr = ht->array[i];
		if (ptr)
		{
			free_list(ptr);
			ptr = NULL;
		}
		i++;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
