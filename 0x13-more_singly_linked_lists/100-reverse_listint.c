#include "lists.h"
/**
 * reverse_listint - reverses a listint_t list.
 * @head: a pointer to the address of
 * the head list_t list
 * Return: A pointer to the first node of the reversed link.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;
		return (*head);
}
