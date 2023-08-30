#include "lists.h"

/**
 * listint_len - function that returns the number of elems in linkeed list
 * @h: pointer to the head of linked list
 * Return: retruns the number of
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t cntr = 0;

	while (h != NULL)
	{
		cntr++;
		h = h->next;
	}
	return (cntr);
}
