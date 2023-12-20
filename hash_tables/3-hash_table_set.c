#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/* Function prototypes */
hash_node_t *create_node(const char *key, const char *value);
void insert_node_at_index(hash_table_t *ht, hash_node_t *new_node, unsigned long int index);

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
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	hash_node_t *new_node = create_node(key, value);

	if (new_node == NULL)
		return (0);

	insert_node_at_index(ht, new_node, index);
	return (1);
}
