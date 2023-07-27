#include "lists.h"

/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 *
 * @head: the first node
 * @str: the string to be added;
 *
 * Return: return new list with new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (*head);
}
