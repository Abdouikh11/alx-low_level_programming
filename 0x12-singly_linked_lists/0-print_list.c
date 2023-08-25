#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function prints all element of list_t
 * @h: pointer to head of list
 * Return:the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cnt;
	cnt = 0;

	while (h)
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
