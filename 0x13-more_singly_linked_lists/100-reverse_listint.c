#include "lists.h"

/**
 * reverse_listint - reverses the linked list listint_t
 * @head: pointer to pointer to node
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *new_head;

	if (head == NULL || *head == NULL)
		return (NULL);

	new_head = NULL;

	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		(*head)->next = new_head;
		new_head = *head;
		*head = temp;
	}

	(*head)->next = new_head;

	return (*head);
}

