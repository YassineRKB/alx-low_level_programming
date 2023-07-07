#include "hash_tables.h"
/**
 * key_index - function to get index of a key 
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int res = hash_djb2(key);
	res = res % size;
	return (res);
}
