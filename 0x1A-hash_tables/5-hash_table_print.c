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
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			for (; tmp != NULL; tmp = tmp->next)
			{
				if (indicator != 0)
					printf(", ");
				printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
				indicator = 1;
			}
		}
	}
	printf("}\n");
}
