#include "lists.h"
/**
 * *get_nodeint_at_index - get node with the n index
 * @head: node list
 * @index: index
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head != NULL)
	{
		while (head)
		{
			if (index == i)
				return (head);
			head = head->next;
			i++;
		}
	}
	return (NULL);
}
