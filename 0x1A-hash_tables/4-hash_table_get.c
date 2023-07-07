#include "hash_tables.h"
/**
 * hash_table_get - func to get value of given key
 * @ht: concerned Hash table
 * @key: needle in haystack
 * Return: Null on fail, value on success
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned char *nkey = (unsigned char *)key;
	unsigned long int i;
	hash_node_t *theHash;

	if (!ht || !key || *key == '\0')
		return (NULL);
	i = key_index(nkey, ht->size);
	theHash = ht->array[i];
	if (!theHash)
		return (NULL);
	for (;
	theHash->next && strcmp(key, theHash->key); theHash = theHash->next
	)
		;
	if (strcmp(key, theHash->key) == 0)
		return (theHash->value);
	return (NULL);
}
