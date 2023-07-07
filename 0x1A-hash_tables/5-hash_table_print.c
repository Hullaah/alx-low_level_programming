#include "hash_tables.h"
/**
 * hash_table_print - prints the buckets in the hash table
 * @ht: hash table
 * Return: void (does not have a return value)
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	char *print;
	int first, j = 0;

	if (!ht)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		print = "";
		ptr = ht->array[i];
		if (ptr)
		{
			first = j == 0 ? 1 : 0;
			while (ptr)
			{
				print = (first && !j) ? "" : ", ";
				printf("%s", print);
				printf("'%s': '%s'", ptr->key, ptr->value);
				j++;
				ptr = ptr->next;
			}

		}
	}
	putchar('}');
	putchar('\n');
}
