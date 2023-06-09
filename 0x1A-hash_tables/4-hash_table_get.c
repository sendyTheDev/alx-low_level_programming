#include "hash_tables.h"

/**
 * hash_table_get - given key
 * @key: key
 * @ht: hash table
 *
 * Return: value; or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int mall;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);
	mall = key_index((const unsigned char *)key, ht->size);

	tmp = (ht->array)[mall];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	else
		return (tmp->value);
}
