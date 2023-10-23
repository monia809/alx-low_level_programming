#include "lists.h"
#include <stdio.h>

/**
 * print_listint - func
 *
 * @h: point
 *
 * Format: s
 *
 * Return: non
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	/* while we have a pointer to head */
	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
