#include "main.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 */

size_t	listint_len(const listint_t *h) {
	size_t nodeCount = 0;

	while (h != NULL) {
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}
