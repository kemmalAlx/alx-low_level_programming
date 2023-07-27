#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add
 *
 * Return: NULL if it fails / starting addr of the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t str_len = 0;

	/*set strig length to 0 if its NULL*/
	if (str == NULL)
		str_len = 0;

	/*count length of string*/
	while (str[str_len] != '\0')
		str_len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = str_len;
	new->next = NULL;

	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
