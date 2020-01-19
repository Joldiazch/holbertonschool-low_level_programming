#include "hash_tables.h"
/**
* hash_table_set - print all elements of a list staring in head.
* @ht: pointer for head of lements.
* @key: key of new node
* @value: value of new node
* Return: 1 if it succeeded, 0 otherwise.
*
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (key == NULL || value == NULL || ht == NULL || strcmp(key, "") == 0)
		return (0);
	if (ht->array == NULL || new_node == NULL)
		return (0);
	idx = key_index((const unsigned char *) key, ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new_node;
		ht->array[idx]->key = strdup(key);
		ht->array[idx]->value = strdup(value);
		ht->array[idx]->next = NULL;
		return (1);
	}
	if (strcmp(ht->array[idx]->key, key) == 0)
	{
		free(ht->array[idx]->value);
		ht->array[idx]->value = strdup(value);
		free(new_node);
		return (1);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	/* To the "previus" head, becouse new will be the new head */
	ht->array[idx] = new_node;
	/* new head is new */
	return (1);
}
