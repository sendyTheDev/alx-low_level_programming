#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @key: the key (can't be empty string)
 * @value: value associated with the key
 * @ht: hash table
 *
 * Return: 1 on success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	hash_node_t *node;

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);

	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->value = strdup(value);
	node->key = strdup(key);
	ht->array[idx] = node;
	node->next = ht->array[idx];
	return (1);
}
