#include "hash_tables.h"
/**
*
*
*
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
		return(NULL);

	new->array = malloc(sizeof(shash_node_t) * size);
	if (new->array = NULL)
		return (NULL);
	new->size = size;

	
}
