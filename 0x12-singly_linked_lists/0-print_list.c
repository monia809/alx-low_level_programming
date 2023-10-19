#include "lists.h"

/**
 * print_list - print
 *
 * @h: sing
 *
 * Return: non
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* while we have a pointer to list */

	while (h != 0)

	{
		/* dereference pointer and check if str is null */

		if (h->str == 0)

		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else /* if not NULL */
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
