#include "lists.h"

/**
 * _strlen - Returns the length of a string.
 * @s: pointer to a character string
 * Return: the length of the string.
 */
int _strlen(const char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);

}

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: a pointer to the head of the list
 * @str: the string to be stored in the new node
 * Return: A pointer to the newly added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = _strlen(str);
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
