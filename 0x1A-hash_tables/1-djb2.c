#include "hash_tables.h"
/**
 * hash_djb2 - func that implements djb2 algo
 * @str: string
 * Return: value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
