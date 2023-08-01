#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 *
 * @head: pointer to the first node of the list
 * @index: position to be return
 *
 * Return: ode at nth index OR NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ret;

	while (head)
	{
		if (!index)
		{
			ret = head;
			return (ret);
		}
		head = head->next;
		index--;
	}
	return (NULL);
}
