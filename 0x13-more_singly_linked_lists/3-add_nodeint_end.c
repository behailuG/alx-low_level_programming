#include "lists.h"
/**
 * add_nodeint_end - add new node to the end of the list
 * @head: node list
 * @n: item
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *all_nodes;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			all_nodes = *head;
			while (all_nodes->next != NULL)
				all_nodes = all_nodes->next;
			all_nodes->next = new_node;
			return (all_nodes);
		}
	}
	return (NULL);
}
