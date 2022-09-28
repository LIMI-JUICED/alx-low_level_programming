#include "hash_tables.h"

/**
 * key_index - Generates the key using hash_djb2
 * @key: Pointer the keys
 * @size: size table
 * Return: Index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
