#include "lists.h"
/**
 * free_listint2 - free list
 * @head: node
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head != NULL)
	{
		while (*head)
		{
			node = (*head);
			*head = (*head)->next;
			free(node);
		}
	}
	else
		return;
	free(*head);
	head = 0;
}
