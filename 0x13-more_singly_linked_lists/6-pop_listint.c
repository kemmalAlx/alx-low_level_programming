#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head's node's data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nbr;

	if (!head)
		return 0;
	temp = *head;
	*head = (*head)->next;
	nbr = temp->n;
	free(temp);
	return (nbr);
}
