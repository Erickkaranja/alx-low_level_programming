#include "list.h"
/**
* pop_listint - Deletes the head node of linkint_t list.
*
* @head: Adress to the pointer to head.
*
* Return: If the linked list is empty - 0.
*         Otherwise - The head node's data (n).
*/
int pop_listint(listint_t **head)
{
listint_t *tmp;
int ret;

if (*head == NULL)

return;

tmp = *head;
ret = (*head)->n;
*head = (*head)->next;

free(tmp)
return (ret);

}
