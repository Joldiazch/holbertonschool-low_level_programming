#include "hash_tables.h"
/**
* hash_table_print -  retrieves a value associated with a key.
* @ht: is the hash table you want to look into
* Return: void.
*
*/
void hash_table_print(const hash_table_t *ht)
{
	int indicator = 0;

	printf("{");
	for (size_t i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (indicator != 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (ht->array[i]->next != NULL)
				printf("'%s': '%s'", ht->array[i]->next->key, ht->array[i]->next->value);
			indicator = 1;
		}
	}
	printf("}\n");
}
