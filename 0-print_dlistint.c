#include "lists.h"

/**
 * print_dlistint - print elements
 * @h: start of the linked list
 * Return: numb of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
