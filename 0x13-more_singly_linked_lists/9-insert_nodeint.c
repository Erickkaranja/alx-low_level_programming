#include "lists.h"

/**
* Description - inserts a new node at a given index
* 
*
*
*
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int nodes;
    listint_t *new, *copy = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);
        new->n = n;
    if (idx == 0)
    {
        new->next = copy;
        *head = new;
        return (new);
    }
    for (nodes = 0 ; nodes < (idx - 1) ; nodes++)
    {
    if (copy == NULL || copy->next == NULL)
    
        return (NULL);
        copy = copy->next;
    }
        new->next = copy->next;
        copy->next = new;
        return (new);
}
