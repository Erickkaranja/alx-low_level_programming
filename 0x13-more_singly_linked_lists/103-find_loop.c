#include "lists.h"
/**
* find_listint_loop - finds a loop in a linked list.
*
* @head: pointer to the kinked list.
*
* Return:The linked list with a loop else NULL.
*/

listint_t *find_listint_loop(listint_t *head)
{
    listint_t *hare, *tortoise;

    if (head == NULL || head->next == NULL)

    return (NULL);

    tortoise = head->next;
    hare = (head->next)->next;

    while (hare)
    {
        if (tortoise == hare)
        {
        tortoise = head;

            while (tortoise != hare)
            {
            tortoise = tortoise->next;
            hare = hare->next;
            }
            return (tortoise);
        }  
        tortoise = tortoise->next;
        hare = (hare->next)->next;
   }
   return (NULL);
}
