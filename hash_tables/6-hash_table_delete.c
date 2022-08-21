#include "hash_tables.h"

/**
 * hash_table_delete - free and delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int id = 0;
	hash_node_t *nod, *nex;

	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	while (id < ht->size)
	{
		nod = (ht->array)[id];
		while (nod)
		{
			nex = nod->nex;
			if (nod->key)
				free(nod->key);
			if (nod->value)
				free(nod->value);
			nod->key = NULL;
			nod->value = NULL;
			free(nod);
			nod = nex;
		}
		id++;
	}
	free(ht->array);
	free(ht);
}
