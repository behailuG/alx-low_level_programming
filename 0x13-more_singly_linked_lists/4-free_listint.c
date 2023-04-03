#include "lists.h"
/**
 * free_listint - free node
 * @head: node
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}

	free(head);
}
