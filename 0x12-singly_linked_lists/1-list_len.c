#include "lists.h"

/**
 * list_len - function that returns nmb of elemnts in a linked list
 * @h:the pointer  to the head of the ls
 * Return: return the number of lelements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}


