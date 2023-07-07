#include "hash_tables.h"
/**
 * hash_table_get - gets the value of a key in the hash table
 * @ht: hash table
 * @key: hash key
 * Return: corresponding value of hash key in the hash table
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

        if (!ht)
                return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (!strcmp(ptr->key, key))
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
