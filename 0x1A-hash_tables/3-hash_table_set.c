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
	if (!ht || !ht->array || ht->size == 0 || !key || !value)
		return (0);
	size_t	index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *hash;
	hash = ht->array[index];
	while (hash)
	{
		if (strcmp(hash->key, key) == 0)
		{
			hash->value = (char *)value;
			return (1);
		}
		hash = hash->next;
	}
	hash = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!hash)
		return (0);
	hash->key = strdup(key);
	hash->value = strdup(value);
	hash->next = ht->array[index];
	ht->array[index] = hash;
	return (1);
}
