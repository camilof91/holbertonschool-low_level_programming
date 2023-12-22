#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			flag = 1;
		}
	}
	printf("}\n");
}
