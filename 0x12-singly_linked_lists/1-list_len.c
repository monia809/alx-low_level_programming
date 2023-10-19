#include <main.h>


/**
 * list_len - f
 *
 * @h: point
 *
 * Return: num
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
