#include "hash_tables.h"

/**
 * make_new_node - creates new node
 * @key: key of the node
 * @value: value of the node
 * Return: new node
*/
hash_node_t *make_new_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key of the new element
 * @value: value of the new element
 * Return: 1 if succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int indx;
	char *new_value;

	if (!ht || !ht->array || ht->size == 0 || !key || !value || strlen(key) == 0)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[indx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}
	new_node = make_new_node(key, value);
	if (!new_node)
		return (0);
	new_node->next = ht->array[indx];
	ht->array[indx] = new_node;
	return (1);
}
