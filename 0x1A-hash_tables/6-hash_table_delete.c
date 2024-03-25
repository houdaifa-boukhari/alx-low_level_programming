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
		if (head->key != NULL)
			free(head->key);
		// if (head->value)
		// 	free(head->value);
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

int main(void)
{
    hash_table_t *ht;
    char *key;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Streetz");
    // key = strdup("Tim");
    // value = strdup("Britton");
    // hash_table_set(ht, key, value);
    // key[0] = '\0';
    // value[0] = '\0';
    // free(key);
    // free(value);
    hash_table_set(ht, "98", "Battery Street"); 
    hash_table_set(ht, "hetairas", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z");
    hash_table_set(ht, "mentioner", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z Chu");
    hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}
