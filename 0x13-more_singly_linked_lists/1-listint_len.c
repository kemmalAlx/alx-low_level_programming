#include "lists.h"

/**
 * listint_len - a function that returns the number
 * of elements in a linked list
 *
 * @h: linked list
 *
 * Return: return number of element in linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
