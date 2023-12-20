#include "hash_tables.h"
#include <stdlib.h>  /* Include the necessary header file for free and malloc */
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
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	/* Check for NULL pointers and empty key */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Compute the index where the key/value pair should be stored */
	index = key_index((unsigned char *)key, ht->size);

	/* Check if a node with the same key already exists */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		/* If a node with the same key exists, update its value */
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value); /* Free existing value */
			current_node->value = strdup(value); /* Duplicate new value */
			if (current_node->value == NULL)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}

	/* Allocate memory for a new node and duplicate key and value */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	/* Insert the new node at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
