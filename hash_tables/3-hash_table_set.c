#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

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
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *new_node = create_node(key, value);

	if (new_node == NULL)
		return (0);

	insert_node_at_index(ht, new_node, index);
	return (1);
}

/**
 * create_node - Creates a new hash node.
 * @key: The key.
 * @value: The value.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_node_at_index - Inserts a node at the beginning of the linked list.
 * @ht: The hash table.
 * @new_node: The new node to insert.
 * @index: The index at which to insert the node.
 */
void insert_node_at_index(hash_table_t *ht, hash_node_t *new_node, unsigned long int index)
{
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
}
