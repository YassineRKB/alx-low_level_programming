#include "hash_tables.h"
/**
 * shash_table_create - func to create a hash table
 * @size: size of the size of the array
 * Return: pointer to created hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *HolyHash;
	unsigned long int id;

	if (!size)
		return (NULL);
	HolyHash = malloc(sizeof(shash_table_t));
	if (!HolyHash)
		return (NULL);

	HolyHash->size = size;
	HolyHash->array = malloc(sizeof(shash_node_t *) * size);
	if (!HolyHash->array)
		return (NULL);
	while (id < size)
	{
		HolyHash->array[id] = NULL;
		id++;
	}
	HolyHash->shead = NULL;
	HolyHash->stail = NULL;
	return (HolyHash);
}

/**
 * shash_table_get - func to get value of given key
 * @ht: concerned Hash table
 * @key: needle in haystack
 * Return: Null on fail, value on success
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned char *nkey = (unsigned char *)key;
	unsigned long int i;
	shash_node_t *theHash;

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

/**
 * insert_node - func to insert new Hash Node
 * @ht: concerned Hash table
 * @new: new Hash
 * Return: VOID
 */
void insert_node(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *Hash;

	if (!ht->shead)
	{
		new->sprev = NULL, new->snext = NULL;
		ht->shead = new, ht->stail = new;
	}
	else if (strcmp(ht->shead->key, new->key) > 0)
	{
		new->sprev = NULL, new->snext = ht->shead;
		ht->shead->sprev = new, ht->shead = new;
	}
	else
	{
		Hash = ht->shead;
		for (; Hash->snext && strcmp(Hash->snext->key, new->key) < 0;
		Hash = Hash->snext)
			;
		new->sprev = Hash;
		new->snext = Hash->snext;
		if (!Hash->snext)
			ht->stail = new;
		else
			Hash->snext->sprev = new;
		Hash->snext = new;
	}
}

/**
 * shash_table_set - function to add item to the HASH table
 * @ht: concerned hash table
 * @key: key
 * @value: key's value
 * Return: 0 on fail, 1 on success
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newBatch;
	unsigned long int i;
	unsigned char *nkey = (unsigned char *)key;

	if (!ht || !key || !value || *key == '\0')
		return (0);
	i = key_index(nkey, ht->size);
	newBatch = ht->array[i];
	while (newBatch)
	{
		if (!strcmp(key, newBatch->key))
		{
			free(newBatch->value);
			newBatch->value = strdup(value);
			return (1);
		}
		newBatch = newBatch->next;
	}
	newBatch = malloc(sizeof(shash_node_t));
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
	insert_node(ht, newBatch);
	return (1);
}

/**
 * shash_table_print - function to print Hash Table content
 * @ht: concerned Hash table
 * Return: VOID
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *Hash;

	if (!ht)
		return;

	Hash = ht->shead;
	printf("{");
	while (Hash)
	{
		if (ht->shead != Hash)
			printf(", ");
		printf("'%s': '%s'", Hash->key, Hash->value);
		Hash = Hash->snext;
	}
	printf("}");
	printf("\n");
}

/**
 * shash_table_print_rev - function to print Hash Table content in reverse
 * @ht: concerned Hash table
 * Return: VOID
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *Hash;

	if (ht == NULL)
		return;

	Hash = ht->stail;
	printf("{");
	while (Hash)
	{
		if (ht->stail != Hash)
			printf(", ");
		printf("'%s': '%s'", Hash->key, Hash->value);
		Hash = Hash->sprev;
	}
	printf("}");
	printf("\n");
}

/**
 * shash_table_delete - func to delete a hash table
 * @ht: concerned Hash table
 * Return: VOID
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *hash, *aux;

	hash = ht->shead;
	for (; hash; hash = aux)
	{
		aux = hash->next;
		free(hash->value);
		free(hash->key);
		free(hash);
	}
	free(hash);
	free(ht);
}
