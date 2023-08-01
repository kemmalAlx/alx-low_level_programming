#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 *
 * @head: pointer to the first node of the list
 * @n: the number to be add to new node
 *
 * Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);
}