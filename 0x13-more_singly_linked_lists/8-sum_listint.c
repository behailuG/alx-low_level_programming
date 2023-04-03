#include "lists.h"
/**
 * sum_listint - sum all nodes item
 * @head: node
 * Return: sum of node
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
