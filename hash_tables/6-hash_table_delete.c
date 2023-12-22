#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node, *temp;
    char *value_copy;
    unsigned long int index, i;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    temp = ht->array[index];

    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value); // Liberar la memoria del valor anterior
            temp->value = value_copy;
            return (1);
        }
        temp = temp->next;
    }

    new_node = create_node(key, value);
    if (new_node == NULL)
    {
        free(value_copy);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}
