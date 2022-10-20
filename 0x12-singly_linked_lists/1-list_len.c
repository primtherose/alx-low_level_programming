#include "lists.h"
/**
 * list_len - returns then the number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in a list.
 */
size_t list_len(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
