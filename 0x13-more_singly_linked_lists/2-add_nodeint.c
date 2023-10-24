#include "lists.h"

/**
 * add_nodeint -  function
 *
 * @head: poniter
 *
 * @n: data
 *
 *  * Return: NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));

	if (x == 0)
		return (0);

	x->n = n;
	x->next = *head;
	*head = x;

	return (*head);
}

