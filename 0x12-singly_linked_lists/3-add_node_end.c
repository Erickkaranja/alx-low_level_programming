#include "lists.h"
#include <string.h>

/**
*add_node_end - adds a new node at the end of a linked list.
*@head: pointer to the linkedlist head.
*@str: string data in each node.
*Return: linkedlist with the newly added node, else NULL.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	int len;
	char *dup;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0 ; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
return (*head);
}
