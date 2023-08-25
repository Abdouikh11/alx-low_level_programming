#include "lists.h"

/**
 * add_node_end - adds new nod at end of list-t
 * @head: double ptr a the end of ls
 * @str: string to added in nw node
 * Return: returns the addre of new elem of null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw_nd;
	list_t *last = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	nw_nd = malloc(sizeof(list_t));
	if (nw_nd == NULL)
		return (NULL);
	nw_nd->str = strdup(str);
	nw_nd->len = len;
	nw_nd->next = NULL;
	if (*head == NULL)
	{
		*head = nw;
		return (nw_nd);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = nw_nd;
	return (nw_nd);
}
