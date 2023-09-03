#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of linked list
 * @head: double pointer to a head of list called listint_t
 * @n: the value to be added to the new node
 * Return: the address of the new value or NULL
 *
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_nd, *current;

	nw_nd = malloc(sizeof(listint_t));
	if (nw_nd == NULL)
		return (NULL);
	nw_nd->n = n;
	nw_nd->next = NULL;
	if (*head == NULL)
	{
		*head = nw_nd;
		return (nw_nd);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;
	current->next = nw_nd;
	return (nw_nd);
}
