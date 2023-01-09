#include "lists.h"
/**
*add_nodeint_end - adds a node at the end of the linked list.
*@head: adress to the pointer to the head of the linked list.
*@n: the new integer to be contained in thenew linked list.
*Return: A pointer to the newly added linked list.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new *last;

new = malloc(sizeof(listint_t))
{
if (new = NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;

if (*head = NULL)
{
*head = new;
}
else
{
last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}

}
