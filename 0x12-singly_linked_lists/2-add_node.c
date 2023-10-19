#include "lists.h"

/**
 * add_node - function that add
 *
 * @head: pointer to sing
 *
 * @str: pointer to sing
 *
 *
 * Return: The address of the new element or NULL if it failed.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length = 0;

	new_node = malloc(sizeof(list_t));
	/* if it fails returb NULL */
	if (new_node == NULL)
		return (NULL);
	/* loop through the string to find length */
	while (str[length])
		length++;
	/* access the length of new_node and assign it to length */
	new_node->len = length;
	/* access the list of new_node and duplicate it */
	new_node->str = strdup(str);
	/* access the next node of new_node and assign it as the first node */
	new_node->next = *head;
	/* make it the beginning of the list */
	*head = new_node;
	/* return it */
	return (new_node);
}
