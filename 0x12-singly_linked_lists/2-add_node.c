#include "lists.h"

/**
 * add_node - adds new node to the begining of the list_t
 * @head: doouble ptr to the head of ls
 * @str : string to added to new node
 * Return: returns the address of new element or NULL
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t nw_nod;
	unsigned int l = 0;

	while (str[l])
		len++;
	nw_nod = malloc(sizeof(list_t));
	if (nw_nod == NULL)
		return (NULL);
	nw_nod->str = strdup(str);
	nw_nod->l = l;
	nw_nod->next = *head;
	*head = nw_nod;
	return (nw_nod);
}
