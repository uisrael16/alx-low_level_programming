#include "main.h"

/*
 *  Function to print all elements of a listint_t list
 */

size_t	print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->data);
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}

