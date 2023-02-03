#include "hash_tables.h"

/**
* hash_table_get - finds a value associated to a given key.
*
* @ht: the hash table of search.
* @key: The key to find value of.
*
* Return: if the key cannot be matched - NULL else
*	the value associated to the key in ht.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return (node->value);
}
