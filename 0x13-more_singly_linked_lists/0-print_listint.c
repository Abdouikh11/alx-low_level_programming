#include "lists.h"

/**
 * print_listint - function that prints elems in linked list of int
 * @h: pointer to the head of linked list
 *
 * Return: The number of nodes in linked lists
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
