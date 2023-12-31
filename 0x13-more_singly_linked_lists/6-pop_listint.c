#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to first elem in linked list
 *
 * Return: data inside the elem was deleted,
 * or 0 if it is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
