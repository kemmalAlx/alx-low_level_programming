#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 *
 * @head: pointer to the first node
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
		current = *head;

		temp = current;
		while (temp != NULL)
		{
			current = current->next;
			free(temp);
			temp = current;
		}

		*head = NULL;
	}
}
