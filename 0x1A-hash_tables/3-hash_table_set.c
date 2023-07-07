#include "hash_tables.h"
/**
 * exist - checks if a node in a bucket of an hash table already exists
 * @node: bucket of hash table
 * @key: key of node to check
 * Return: node if exists or null if not
*/
hash_node_t *exist(hash_node_t *node, const char *key)
{
	hash_node_t *ptr = node;

	while (ptr)
	{
		if (!strcmp(ptr->key, key))
		{
			free(ptr->value);
			free(ptr->key);
			return (ptr);
		}
		ptr = ptr->next;
	}
	return (ptr);
}
/**
 * hash_table_set - sets a key to it corresponding value pair on the hash table
 * @ht: hash table
 * @key: hash key
 * @value: hash value
 * Return: integer denoting failure or success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *tmp;
	char *k, *v;

	if (!ht)
		return (0);
	hash_node = malloc(sizeof(hash_node_t));
	if (!hash_node)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	k = strdup(key);
	v = strdup(value);
	if (!k || !v)
		return (0);
	tmp = exist(ht->array[index], key);
	if (tmp)
	{
		free(hash_node);
		tmp->value = v;
		tmp->key = k;
		return (1);
	}
	hash_node->key = k;
	hash_node->value = v;
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
