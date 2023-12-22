#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_node - Creates a new hash node.
 * @key: The key string.
 * @value: The value string.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
hash_node_t *create_node(const char *key, const char *value)
{
    hash_node_t *new_node;

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (NULL);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (NULL);
    }

    new_node->next = NULL;

    return (new_node);
}

/**
 * insert_node_at_index - Inserts a node at a given index in the hash table.
 * @ht: The hash table.
 * @new_node: The node to insert.
 * @index: The index at which to insert the node.
 */
void insert_node_at_index(hash_table_t *ht, hash_node_t *new_node, unsigned long int index)
{
    if (ht == NULL || new_node == NULL || index >= ht->size)
        return;

    new_node->next = ht->array[index];
    ht->array[index] = new_node;
}
