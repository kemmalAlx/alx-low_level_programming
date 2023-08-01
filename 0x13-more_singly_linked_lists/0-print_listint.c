#include "lists.h"

/**
 * print_listint - a function print the numbers of list
 *
 * @h: list int
 *
 * Return: return length of list
*/
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	
	return (len);
}
