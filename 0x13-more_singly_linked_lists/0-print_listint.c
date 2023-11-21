#include "main.h"

/*
 *  Function to print all elements of a listint_t list
 *
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */

size_t	print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}

