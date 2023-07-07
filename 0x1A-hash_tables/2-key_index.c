#include "hash_tables.h"
/**
 * key_index - calculates the key index of a given key
 * @key: key
 * @size: size of array
 * Return: the key index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
