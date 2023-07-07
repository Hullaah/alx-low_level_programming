#include "hash_tables.h"
/**
 * hash_table_create - creates an hash table
 * @size: size of hash_table
 * Return: created hash_table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!hash_table)
		return (NULL);
	hash_table->array = malloc(size * sizeof(hash_node_t));
	if (!hash_table->array)
		return (NULL);
	hash_table->size = size;
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
