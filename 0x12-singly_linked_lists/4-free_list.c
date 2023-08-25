#include "lists.h"

/**
 * free_list - function that free a list_t
 * @head: pointer  to the head of the ls
 *
 ***/

void free_list(list_t *head)
{
	list_t *letmp;

	while (head != NULL)
	{
		letmp = head;
		head = head->next;
		free(letmp->str);
		free(letmp);
	}
}
