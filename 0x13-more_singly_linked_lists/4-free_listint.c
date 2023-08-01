#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: pointer to the first node of the list
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;
	while (current)
	{
		free(current);
		head = head->next;
		current = head;
	}
}
