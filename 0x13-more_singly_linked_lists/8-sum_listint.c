#include "lists.h"
/**
*sum_listint - adds the integer values in the linked list.
*@head: pointer to the linked list.
*Return: returns the sum.
*/
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
