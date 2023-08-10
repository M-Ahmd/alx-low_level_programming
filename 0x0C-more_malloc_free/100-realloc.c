#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_realloc - is an array
*@ptr: is an argument
*@old_size: is an argument
*@new_size: is an argument
*Return: Always 0
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (ptr == NULL)
	return (malloc(new_size));
	if (new_size == old_size)
	return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
	free(ptr);
	return (NULL);
	}
	if (new_size == 0)
	{
	free(ptr);
	return NULL;
	}

	for (i = 0; i < old_size; i++)
	{
	((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
