#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h)
	{
		while (h)
		{
			if (h->str)
				printf("[%d] %s\n", h->len, h->str);
			else
				printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
	}
	return (i);
}
