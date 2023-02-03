#include "hash_tables.h"

/**
* hash_table_create - creates a hash table in form of an array
*
* @size: The size of the hash table to be created.
*
* Return: A pointer to newly created hash table.
*
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
	return (NULL);
	}
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		ht->array[i] = NULL;
return (hash_table);
}
