#include "lists.h"
#include <stddef.h>

/**
 * sum_dlistint - returns the number of elements in a linked dlistint_t list
 * @head: pointer to the head of the doubly linked list
 * Return: sum of all the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h = head;

	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
