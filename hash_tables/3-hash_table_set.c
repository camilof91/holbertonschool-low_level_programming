#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (must be duplicated).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = key_index((unsigned char *)key, ht->size);
    hash_node_t *new_node;

    /* Create a new node with the given key and value */
    new_node = create_node(key, value);
    if (new_node == NULL)
        return (0);

    /* Insert the new node at the beginning of the linked list at the calculated index */
    insert_node_at_index(ht, new_node, index);

    return (1);
}
