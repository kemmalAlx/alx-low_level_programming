#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: pointer to the first node of the list
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
