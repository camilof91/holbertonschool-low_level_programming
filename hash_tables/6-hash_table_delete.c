#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *current, *temp;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current != NULL)
        {
            temp = current->next;
            free(current->key);
            free(current->value);
            free(current);
            current = temp;
        }
        ht->array[i] = NULL;  /* Clear the array after freeing nodes */
    }

    free(ht->array);
    free(ht);
}
