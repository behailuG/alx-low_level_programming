#include "lists.h"
/**
 * *add_node_end - adding new node to the last element;
 * @head: heading
 * @str: tring
 * Return: all nodes including new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;

	if (str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (0);
		new_node->str = strdup(str);
		new_node->len = len(str);
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			last = *head;
			while (last->next != NULL)
				last = last->next;
			last->next = new_node;
		}
	}
	return (last);
}
/**
 * len - string length
 * @str: string
 * Return: length
 */
int len(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
