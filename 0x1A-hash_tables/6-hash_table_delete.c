#include "hash_tables.h"
/**
 * hash_table_delete - deletes the hash tables
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr, *tp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				tp = ptr;
				ptr = ptr->next;
				free(tp->key);
				free(tp->value);
				free(tp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
