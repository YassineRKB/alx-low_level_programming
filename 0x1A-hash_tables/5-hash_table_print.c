#include "hash_tables.h"
/**
 * hash_table_print - function to print the hash table in JSON format
 * @ht: concerned hash table
 * Return: VOID
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *Hash;
	unsigned long int i = 0, flag, size;

	if (!ht)
		return;
	size = ht->size;
	printf("{");
	for (flag = 0; i < size; i++)
	{
		Hash = ht->array[i];
		if (flag && Hash)
			printf(", ");
		while (Hash)
		{
			printf("'%s': '%s'",Hash->key, Hash->value);
			if (Hash->next)
				printf(", ");
			flag = 1;
			Hash = Hash->next;
		}
	}
	printf("}");
	printf("\n");

}
