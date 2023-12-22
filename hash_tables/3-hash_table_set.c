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
