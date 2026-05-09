#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add/update the key/value to.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new, *tmp;
	char *val_dup;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	val_dup = strdup(value);
	if (val_dup == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = val_dup;
			return (1);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val_dup);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(val_dup);
		free(new);
		return (0);
	}
	new->value = val_dup;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
