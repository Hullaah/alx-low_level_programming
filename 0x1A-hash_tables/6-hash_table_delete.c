#include "hash_tables.h"
/**
 * hash_table_delete - deletes an hash_table ad it's elements
 * @ht: hash table to be deleted
 * Return: void (does not have a return value)
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr, *head;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			head = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = head;
		}
	}
	free(ht->array);
	free(ht);
}
