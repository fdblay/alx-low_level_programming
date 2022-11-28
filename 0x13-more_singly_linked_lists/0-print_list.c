#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t
 * @h: pointer to first element of listint
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h != NULL)
		{
			printf("%u\n", h->n);
			h = h->next;
		}
		
	}
	return (i);
}