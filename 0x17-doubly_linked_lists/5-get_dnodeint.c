#include "lists.h"
/**
* dlistint_len - finds of elements in a linked list.
* @h: Pointer to the first element of the linked list.
* Return: the number of elements in a linked list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

/**
* get_dnodeint_at_index - gets the node at a given index.
* @head: The pointer to the initial node to the linked list.
* @index: The index to be found.
*
* Return: The indexed node.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int node, i;
dlistint_t *nodeValue;

node = dlistint_len(head);

if (index > node)
{
return (NULL);
}
nodeValue = head;
for (i = 0 ; i < index ; i++)
{
nodeValue = nodeValue->next;
}
return (nodeValue);
}
