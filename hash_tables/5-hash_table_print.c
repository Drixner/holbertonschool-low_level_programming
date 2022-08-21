#include "hash_tables.h"

/**
 * hash_table_print - print key/values of hash table in order
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int id = 0;
	hash_node_t *nod;
	char *comna = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (id < ht->size)
	{
		nod = ((ht->array)[id]);
		while (nod)
		{
			printf("%s'%s': '%s'", comna, nod->key, nod->value);
			comna = ", ";
			nod = nod->next;
		}
		id++;
	}
	puts("}");
}