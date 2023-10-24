#include "lists.h"
#include <stdio.h>

/**
 *  listint_len -  function
 *
 * @h: pointer
 *
 * Return: num
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
