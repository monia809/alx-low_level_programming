#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a singly linked list.
 * @head: pointer to the head of linked list.
 *
 * Here we will use recursion unlike in the pre
 *
 * Return: non
 */

void free_listint(listint_t *head)
{
	/* go to the end of list then start freeing from there */

	/* we reached the end of the list */
	if (head == NULL)
		return;
	/* free rything else */
	free_listint(head->next);
	/* then fre */
	free(head);
	/* elegante, eh*/
}
