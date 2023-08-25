#include "lists.h"

/**
 * print_list - function prints all element of list_t
 * @h: pointer to head
 * Return:the number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		cnt++;
	}
	return (cnt);

}
