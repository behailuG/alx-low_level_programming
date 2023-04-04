#include "lists.h"
/**
 * *reverse_listint - reverse node
 * @head: node list
 * Return: last node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	if (*head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}
		*head = prev;
		return (*head);
	}
	return (NULL);
}
