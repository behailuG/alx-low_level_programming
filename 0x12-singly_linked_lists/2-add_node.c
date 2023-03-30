#include "lists.h"
/**
 * *add_node - add node to first element
 * @head: head
 * @str: string
 * Return: new node pointing address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head != NULL && str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (0);
		new_node->str = strdup(str);
		new_node->len = len(str);
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
/**
 * len - string length
 * @str: string
 * Return: count
 */
int len(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
