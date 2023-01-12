#include <stdio.h>
#include "lists.h"
/**
* print_listint - prints elements of a linked list.
*@h: pointer to the first element of linked list.
* Return: no of elements in the linked list.
*/

size_t print_listint(const listint_t *h)
{

size_t nodes = 0;
while (h)
{
nodes++;
printf("%d\n", h->n);

h = h->next;
}
return (nodes);
}

