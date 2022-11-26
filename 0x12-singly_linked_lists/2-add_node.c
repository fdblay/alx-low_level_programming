#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: pointer to first element of list_t
 * @str: new element to assign to new node
 *
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dub;
	int len;
	list_t *new_list;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);

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
	new_list->next = *head;

	*head = new_list;

	return (new_list);
}
