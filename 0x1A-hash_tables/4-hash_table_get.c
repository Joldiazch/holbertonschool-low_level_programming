#include "hash_tables.h"
/**
* hash_table_get -  retrieves a value associated with a key.
* @ht: is the hash table you want to look into
* @key: key of node
* Return: value, or NULL if key couldn’t be found
*
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	idx = key_index((const unsigned char *) key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	if (strcmp(ht->array[idx]->key, key) == 0)
		return (ht->array[idx]->value);
	else if (strcmp(ht->array[idx]->next->key, key) == 0)
		return (ht->array[idx]->next->value);
	else
		return (NULL);
}
