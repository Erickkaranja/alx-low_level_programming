#include "lists.h"

/**
*Description - aliterate through the node value less
               than the indexed value.(nth node)
*@head: pointer to the first node in linked list.
*@index: place to add the node.
*Return: the newly inserted node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int nodes;

for (nodes = 0 ; nodes < index ; nodes++)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);
}
