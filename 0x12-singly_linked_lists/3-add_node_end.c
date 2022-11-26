#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: pointer to first element of list_t
 * @str: new element to assign to new node
 *
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dub;
	int len;
	list_t *new_list;
	list_t *temp;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);

	temp = *head;

	dub = strdup(str);
	if (dub == NULL)
	{
		free(new_list);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;


	new_list->str = dub;
	new_list->len = len;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (NULL);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_list;

	return (new_list);
}
