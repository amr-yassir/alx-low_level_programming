#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key of the node
 * Return: value associated with the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_table_t *current;
	unsigned long int indx;

	if (!ht || !ht->array || !ht->size || !key || !strlen(key))
		return (NULL);
	indx = key_index((const unsigned char *)key, ht->size);
	if (!indx)
		return (NULL);
	current = ht->array[indx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
