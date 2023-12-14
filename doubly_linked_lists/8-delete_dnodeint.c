#include "lists.h"
#include <stddef.h>

/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a dlistint_t linked list
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next->next;

	if (temp != NULL)
		temp->prev = current;

	free(current->next);
	current->next = temp;
	return (1);
}
