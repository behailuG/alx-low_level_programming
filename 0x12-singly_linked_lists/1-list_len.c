#include "lists.h"
/**
 * list_len - node list
 * @h: linked list
 * Return: node list
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
