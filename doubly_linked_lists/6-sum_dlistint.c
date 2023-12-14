#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head of the doubly linked list
 * Return: the number of nodes
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
