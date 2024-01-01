#include "hash_tables.h"

/**
 * key_index - gives the index of a k
 * @key: the key
 * @size: the si of the array of the hash table.
 *
 * Return: nothing
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
