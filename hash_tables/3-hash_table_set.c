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
