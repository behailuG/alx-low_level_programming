#include "lists.h"
/**
 * *insert_nodeint_at_index - insert node at nth index
 * @head: node list
 * @idx: index
 * @n: item
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 1;

	if (*head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		if (idx > 0)
		{
			temp = *head;
			while (temp)
			{
				if (i == idx)
				{
					new_node->next = temp->next;
					temp->next = new_node;
					return (new_node);
				}
				temp = temp->next;
				i++;
			}
			if (idx > i)
				return (NULL);
		}
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
