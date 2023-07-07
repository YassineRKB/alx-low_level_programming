#include "hash_tables.h"
/**
 * hash_table_delete - func to delete a hash table
 * @ht: concerned Hash table
 * Return: VOID
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0, size;
	hash_node_t *hash;

	size = ht->size;
	while (i < size)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				hash = ht->array[i]->next;
				free(ht->array[i]->value);
				free(ht->array[i]->key);
				free(ht->array[i]);
				ht->array[i] = hash;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
