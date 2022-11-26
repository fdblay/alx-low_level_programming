#include "lists.h"

/**
 * list_len - returns the total number of elements of linked list_t
 * @h: pointer to list_t
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
		//printf("-> %d elements\n", count);
	}
	return (count);
}
