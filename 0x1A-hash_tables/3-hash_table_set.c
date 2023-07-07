#include "hash_tables.h"
/**
 * hash_table_set - function to add item to the HASH table
 * @ht: concerned hash table
 * @key: key
 * @value: key's value
 * Return: 0 on fail, 1 on success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newBatch = NULL;
	unsigned long int i;
	unsigned char *nkey = (unsigned char *)key;

	if (!ht || !key || !value || *key == '\0')
		return (0);
	i = key_index(nkey, ht->size);
	newBatch = ht->array[i];
	for (; newBatch != NULL; newBatch = newBatch->next)
	{
		if (!strcmp(key, newBatch->key))
		{
			free(newBatch->value);
			newBatch->value = strdup(value);
			return (1);
		}
	}
	newBatch = malloc(sizeof(hash_node_t *));
	if (!newBatch)
		return (0);
	newBatch->key = strdup(key);
	if (!newBatch->key)
	{
		free(newBatch);
		return (0);
	}
	newBatch->value = strdup(value);
	if (!newBatch->value)
	{
		free(newBatch->key);
		free(newBatch);
		return (0);
	}
	newBatch->next = ht->array[i];
	ht->array[i] = newBatch;
	return (1);
}
