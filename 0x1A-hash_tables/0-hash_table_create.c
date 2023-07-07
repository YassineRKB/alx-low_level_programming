#include "hash_tables.h"
/**
 * hash_table_create - func to create a hash table
 * @size: size of the size of the array
 * Return: pointer to created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nHolyHashTable;

	if (!size)
		return (NULL);
	nHolyHashTable = malloc(sizeof(hash_table_t));
	if (!nHolyHashTable)
		return (NULL);
	nHolyHashTable->size = size;
	nHolyHashTable->array = malloc(
		sizeof(hash_node_t *) * size
	);
	if (!nHolyHashTable->array)
		return (NULL);
	return (nHolyHashTable);
}
