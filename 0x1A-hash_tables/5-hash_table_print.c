#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i = 0;
	bool check;

	if (!ht || !ht->array || ht->size == 0)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	check = false;
	while (i < ht->size)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			if (check)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			check = true;
			ptr = ptr->next;
		}
		i++;
	}
	printf("}\n");
}
