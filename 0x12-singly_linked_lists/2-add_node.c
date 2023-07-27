#include "lists.h"
/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 *
 * @head: the first node
 * @str: the string to be added;
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!str)
		return (*head);
	new = malloc(sizeof(list_t));
	if (!new)
		return (*head);
	
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (*head);
}
