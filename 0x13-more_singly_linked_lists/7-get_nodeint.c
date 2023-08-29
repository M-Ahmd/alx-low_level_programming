#include "lists.h"
/**
*get_nodeint_at_index-..........................................
*@head:........................................................
*@index:.......................................................
*Return:........................................................
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < index; i++)
	{
	tmp = head;
	tmp = tmp->next;
	}
	return (tmp);

}
