#include "main.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint(listint_t *head)
{
    while (head != NULL)
    {
        listint_t *temp = head;
        head = head->next;
        free(temp);
    }
}
