#include "hash_tables.h"

/**
* key_index - function that gives you the index of a key.
*
* @key: the key.
* @size: size of the array of the hash table.
*
* Return: The index of the key on the hash map.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value, index;

	value = hash_djb2(key);
	index = value % size;
return (index);
}
