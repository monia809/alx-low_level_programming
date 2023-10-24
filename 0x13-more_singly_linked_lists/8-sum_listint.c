#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of
 *
 * @head: pointer to the head of linked list.
 *
 * Return:  sum of all the data (n) of a linked list or 0 
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
