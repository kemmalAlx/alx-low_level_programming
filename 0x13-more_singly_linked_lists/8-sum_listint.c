#include "lists.h"

/**
 * sum_listint - a function that returns
 * the sum of all the data
 *
 * @head: the node
 *
 * Return: the sum of data or 0 if null
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
