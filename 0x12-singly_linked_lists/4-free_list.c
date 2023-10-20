#include "lists.h"

/**
 * free_list - frees a list of nodes and strings.
 * @head: pointer to the first node
 * Return: No return value (void)
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
