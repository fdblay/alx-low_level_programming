#include "lists.h"

/**
 * free_list - frees up a list_t list memory
 * @head: pointer to list_t (struct)
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
