#include "hash_tables.h"
/**
 * key_index - Get index for storing key in hash table.
 * @key: key to get index
 * @size: size of hash table array.
 *
 * Return: index of key.
 *
 * Description: Use djb2 algorithm for index computation.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
