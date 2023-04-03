#include "lists.h"
/**
 * *add_nodeint - add new node at the head
 * @head: addres of node
 * @n: item to be inserted
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
