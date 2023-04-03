#include "lists.h"
/**
 * listint_len - list length
 * @h: node list
 * Return: number of lists
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			i++;
		}
	}
	return  (i);
}
