#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table = NULL;
    int i = 0;

    hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
    if (!hash_table)
        return (NULL);
    hash_table->size = size;
    hash_table->array = (char **)malloc(sizeof(char *) * (size));
    if (!hash_table->array)
    {
        free(hash_table);
        return (NULL);
    }
    while (i < size)
        hash_table->array[i++] = NULL;
    return (hash_table);
}
