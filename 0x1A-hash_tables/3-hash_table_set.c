#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value
 * @key: key to add to the hash table
 * @value: value to add to the hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int	idx;
	hash_node_t *hash;

	if (!ht || !ht->array || ht->size == 0 || !key || !value)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	hash = ht->array[idx];
	while (hash)
	{
		if (strcmp(hash->key, key) == 0)
		{
			free(hash->value);
			hash->value = strdup(value);
			return (1);
		}
		hash = hash->next;
	}
	hash = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!hash)
		return (0);
	hash->key = strdup(key);
	hash->value = strdup(value);
	hash->next = ht->array[idx];
	ht->array[idx] = hash;
	return (1);
}
