#include "lists.h"

/**
 * add_nodeint - function that adds the new node at the beginning of linked ls
 * @head: double pointer to the head f of linked list
 * @n: integer value to be added to the new nod
 * Return: returns the address of new element or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_nd = malloc(sizeof(listint_t));

	if (nw_nd == NULL)
		return (NULL);
	nw_nd->n = n;
	nw_nd->next = *head;
	*head = nw_nd;
	return (nw_nd);
}
