#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - ............................
* @str: .................................
* Return: ...............................
*/
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
* add_node_end - ........................................
* @head: ................................................
* @str: ..................................................
* Return: ..................................................
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	if (str == NULL)
	return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	tmp = *head;
	while (tmp->next)
	tmp = tmp->next;
	tmp->next = new_node;
	return (new_node);
	}
