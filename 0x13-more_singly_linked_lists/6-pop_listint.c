#include "lists.h"
/**
 * pop_listint - pop head node and return n item
 * @head: node
 * Return: n item
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head != NULL)
	{
		n = (*head)->n;
		new_node = (*head)->next;
		free(*head);
		*head = new_node;
		return (n);
	}
	return (0);
}
