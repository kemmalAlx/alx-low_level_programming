#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 *
 * @head: pointer to the first node
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head)
	{
		temp = *head;
		while (temp)
		{
			current = temp;
			temp = temp->next;
			free(current);
		}
	}
}
